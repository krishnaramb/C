//programming assignment 1

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <fstream>
using namespace std;
const int TOTALNODE = 875714;
int t = 0;
int s = 0;
vector<int> leaders;


class Node {
  private:
    vector <int> adj;
    bool explored;
    int finishingTime;
    int SCCNumbers;
  public:
    Node()
    {
      explored = false;
      finishingTime = 0;
      SCCNumbers = 0;
    }
    int getSCCnumber()
    {
      return SCCNumbers;
    }
    void incrementSCCNum()
    {
      SCCNumbers++;
    }
    void setedge(int edge)
    {
      adj.push_back(edge);
    }
    vector<int> getEdge() const
    {
      return adj;
    }
    void markExplored()
    {
      explored = true;
    }
    bool isExplored()
    {
      return explored;
    }

    void setFinishingTime(int val)
    {
      finishingTime = val;
    }

    int getFinishingTime() const
    {
      return finishingTime;
    }
};

void DFS(Node *G, int i);



Node* Reverse_Graph(const Node * graph)
{
  Node *Graph_rev = new Node[TOTALNODE + 1];
  for(int i =  1; i < TOTALNODE +1 ; ++i)
  {
    const vector<int> edges = graph[i].getEdge();
    for (auto it = edges.begin(); it != edges.end(); ++it)
    {
      int j = *it;
      Graph_rev[j].setedge(i);
    }
  }
  return Graph_rev;
}

void DFS_Loop(Node *G, bool leaderCal = false)
{
  for (int i = TOTALNODE; i >= 1; --i)
  {
    if (!G[i].isExplored())
    {
      s = i;
      if(leaderCal)
      {
        leaders.push_back(s);
      }

      G[s].incrementSCCNum();
      DFS(G,i);
      //////cout<<"s = "<<s<<"\n";
    }
  }
}

void DFS(Node *G, int i)
{
  G[i].markExplored();
  vector<int> edges = G[i].getEdge();
  for(auto it = edges.begin(); it != edges.end(); ++it)
  {
    int j = *it;
    if (!G[j].isExplored())
    {
       G[s].incrementSCCNum();
       DFS(G, j);
    }
  }
  t++;
  G[i].setFinishingTime(t);


}

void Display_finishingTime(Node *G)
{
  for (int i = 1; i < TOTALNODE+1; i++)
  {
    cout<<G[i].getFinishingTime()<<" ";
  }
  cout <<"\n";
}

void Display_Graph(Node *G)
{
    for (int i = 1; i < TOTALNODE+1; i++)
    {
      vector<int> edges = G[i].getEdge();
      for(auto it = edges.begin(); it != edges.end(); ++it)
      {
        int edge = *it;
         cout<<i<<" "<<edge<<"\n";
      }
    }
}

Node * Final_Graph(Node * graph, Node *graph_rev)
{
  Node *G_final =  new Node[TOTALNODE + 1];
  for (int i = 1; i < TOTALNODE+1; i++)
  {
    int fno = graph_rev[i].getFinishingTime();
    auto edges = graph[i].getEdge();
    for(auto it = edges.begin(); it != edges.end(); ++it)
    {
      int edge = *it;
      G_final[fno].setedge(graph_rev[edge].getFinishingTime());
    }
  }
  return G_final;
}
void fiveBigSccs(vector<int> & vec, int val)
{
    int min_val = vec[0];
    int min_index =0;
     for(int i = 1; i < 5; ++i)
     {
         if(min_val > vec[i])
         {
             min_val = vec[i];
             min_index = i;
         }
     }
     if (val > min_val)
     {
         vec[min_index] = val;
     }

}

int main()
{
  vector<int> vec(5);
  Node *Graph = new Node[TOTALNODE + 1];
  char *token;
  string line;
  char myline[10];
  ifstream myFile;
  myFile.open("scc.txt");
  if (!myFile) {
      cerr << "Unable to open file scc.txt";
      exit(1);   // call system to stop
  }
  unsigned int tail, head;
  while(getline(myFile,line))
    {
      strcpy(myline,line.c_str());
      token = strtok(myline," ");
      tail = atoi(token);
      token = strtok(NULL," ");
      head = atoi(token);
      Graph[tail].setedge(head);

    }
    cout <<"hello1\n";
    //Display_finishingTime(Graph);
    //Display_Graph(Graph);
    Node* Graph_rev = Reverse_Graph(Graph);
    //Display_Graph(Graph_rev);
    cout<<"hello2\n";

    DFS_Loop(Graph_rev);
    cout<<"hello3\n";
    //Display_finishingTime(Graph_rev);

    Node * G_final = Final_Graph(Graph, Graph_rev);
    //Display_Graph(G_final);
    cout<<"hello4\n";
    DFS_Loop(G_final,true);
    cout<<"hello5\n";


    for (auto iter = leaders.begin(); iter != leaders.end(); ++iter)
    {
      int sccNum = G_final[*iter].getSCCnumber();
      fiveBigSccs(vec,sccNum);
      //cout<< *iter<<"-> "<< G_final[*iter].getSCCnumber()<<"\n";

    }
    cout<<"hello6\n";
    for(auto iter = vec.begin(); iter != vec.end(); ++iter)
     {
         cout << *iter<< " ";
     }
     cout<<"\nEnd of main";

}
