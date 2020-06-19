#include<thread>
#include<vector>
#include<fstream>
#include<iostream>
#include<algorithm>
#include<unordered_map>


using namespace std;

vector<int> tmp;
unordered_map<int, vector<int>> Graph;
unordered_map<int, vector<int>> rGraph;
vector<vector<vector<int>>> res1;
vector<vector<vector<int>>> res2;
vector<vector<vector<int>>> res3;
vector<vector<vector<int>>> res4;


void dfs1(int u, int num, int end, unordered_map<int, bool> & z, vector<int> & s) {
    if (num == 4 && z.count(u) == 0)   return;
    if (num == 5 && z.count(u) == 0)   return;
    if (num == 6 && z.count(u) == 0)   return;
    if (num == 7)  return;
    
    s[num++] = u;
    int ff;
	for (auto v : Graph[u]) {
        if (v < end)  continue;
        if (v == end)  
        {
            if (num >= 3)
                res1[num].push_back(vector<int>(s.begin(),s.begin() + num)); 
            continue;
        }
        ff = 0;
        for (int i = 1; i < num - 1; i++) if (v == s[i]) {ff = 1; break;}
		if (ff != 1)   dfs1(v, num, end, z, s);
	}
}

void dfs2(int u, int num, int end, unordered_map<int, bool> & z, vector<int> & s) {
    if (num == 4 && z.count(u) == 0)   return;
    if (num == 5 && z.count(u) == 0)   return;
    if (num == 6 && z.count(u) == 0)   return;
    if (num == 7)  return;
    
    s[num++] = u;
    int ff;
	for (auto v : Graph[u]) {
        if (v < end)  continue;
        if (v == end)  
        {
            if (num >= 3)
                res2[num].push_back(vector<int>(s.begin(),s.begin() + num)); 
            continue;
        }
        ff = 0;
        for (int i = 1; i < num - 1; i++) if (v == s[i]) {ff = 1; break;}
		if (ff != 1)   dfs2(v, num, end, z, s);
	}
}

void dfs3(int u, int num, int end, unordered_map<int, bool> & z, vector<int> & s) {
    if (num == 4 && z.count(u) == 0)   return;
    if (num == 5 && z.count(u) == 0)   return;
    if (num == 6 && z.count(u) == 0)   return;
    if (num == 7)  return;
    
    s[num++] = u;
    int ff;
	for (auto v : Graph[u]) {
        if (v < end)  continue;
        if (v == end)  
        {
            if (num >= 3)
                res3[num].push_back(vector<int>(s.begin(),s.begin() + num)); 
            continue;
        }
        ff = 0;
        for (int i = 1; i < num - 1; i++) if (v == s[i]) {ff = 1; break;}
		if (ff != 1)   dfs3(v, num, end, z, s);
	}
}

void dfs4(int u, int num, int end, unordered_map<int, bool> & z, vector<int> & s) {
    if (num == 4 && z.count(u) == 0)   return;
    if (num == 5 && z.count(u) == 0)   return;
    if (num == 6 && z.count(u) == 0)   return;
    if (num == 7)  return;
    
    s[num++] = u;
    int ff;
	for (auto v : Graph[u]) {
        if (v < end)  continue;
        if (v == end)  
        {
            if (num >= 3)
                res4[num].push_back(vector<int>(s.begin(),s.begin() + num)); 
            continue;
        }
        ff = 0;
        for (int i = 1; i < num - 1; i++) if (v == s[i]) {ff = 1; break;}
		if (ff != 1)   dfs4(v, num, end, z, s);
	}
}


void Do1(int start, int end) {
    for (int i = start; i < end; i++)
    {
        int u = tmp[i];
        if (rGraph.count(u) == 0) continue;
        unordered_map<int, bool> k;
        vector<int> s(10,0);
        for (auto x : rGraph[u])
            if (x > u)
            {
                k[x] = 1;
                for (auto y : rGraph[x])
                    if (y > u)
                    {
                        k[y] = 1;
                        for (auto z : rGraph[y])
                            if (z > u)  k[z] = 1;
                    }
            }
        dfs1(u, 0, u, k, s);
    }
}


void Do2(int start, int end) {
    for (int i = start; i < end; i++)
    {
        int u = tmp[i];
        if (rGraph.count(u) == 0) continue;
        unordered_map<int, bool> k;
        vector<int> s(10,0);
        for (auto x : rGraph[u])
            if (x > u)
            {
                k[x] = 1;
                for (auto y : rGraph[x])
                    if (y > u)
                    {
                        k[y] = 1;
                        for (auto z : rGraph[y])
                            if (z > u)  k[z] = 1;
                    }
            }
        dfs2(u, 0, u, k, s);
    }
}


void Do3(int start, int end) {
    for (int i = start; i < end; i++)
    {
        int u = tmp[i];
        if (rGraph.count(u) == 0) continue;
        unordered_map<int, bool> k;
        vector<int> s(10,0);
        for (auto x : rGraph[u])
            if (x > u)
            {
                k[x] = 1;
                for (auto y : rGraph[x])
                    if (y > u)
                    {
                        k[y] = 1;
                        for (auto z : rGraph[y])
                            if (z > u)  k[z] = 1;
                    }
            }
        dfs3(u, 0, u, k, s);
    }
}


void Do4(int start, int end) {
    for (int i = start; i < end; i++)
    {
        int u = tmp[i];
        if (rGraph.count(u) == 0) continue;
        unordered_map<int, bool> k;
        vector<int> s(10,0);
        for (auto x : rGraph[u])
            if (x > u)
            {
                k[x] = 1;
                for (auto y : rGraph[x])
                    if (y > u)
                    {
                        k[y] = 1;
                        for (auto z : rGraph[y])
                            if (z > u)  k[z] = 1;
                    }
            }
        dfs4(u, 0, u, k, s);
    }
}


int main() {
    FILE * fp1 = fopen("/data/test_data.txt","r");
    int ii, mm, nn;
    unordered_map<int, bool> instack;
    while (!feof(fp1)) {
        fscanf(fp1, "%d,%d,%d\n", &mm, &nn, &ii);
        instack[mm] = 1;
        Graph[mm].push_back(nn);
        rGraph[nn].push_back(mm);
    }
    fclose(fp1);
    
    for (int i = 0; i < 8; i++)   res1.push_back(vector<vector<int>>());
    for (int i = 0; i < 8; i++)   res2.push_back(vector<vector<int>>());
    for (int i = 0; i < 8; i++)   res3.push_back(vector<vector<int>>());
    for (int i = 0; i < 8; i++)   res4.push_back(vector<vector<int>>());
    for (auto u : instack) tmp.push_back(u.first);
    sort(tmp.begin(),tmp.end());
    for (auto u : tmp)   sort(Graph[u].begin(),Graph[u].end());

    int len = tmp.size() / 100;
    thread thread0(Do1, 0, 4 * len);

    thread thread1(Do2, 4 * len, 13 * len);

    thread thread2(Do3, 13 * len, 30 * len);

    Do4(30 * len, tmp.size());

    thread0.join();
    thread1.join();
    thread2.join();

    int total = 0;
    for (int j = 3; j < 8; j++)   total += res1[j].size();
    for (int j = 3; j < 8; j++)   total += res2[j].size();
    for (int j = 3; j < 8; j++)   total += res3[j].size();
    for (int j = 3; j < 8; j++)   total += res4[j].size();
    FILE * fp = fopen("/projects/student/result.txt","w");
    fprintf(fp,"%d\n", total);
    for (auto  & y : res1[3])     fprintf(fp,"%d,%d,%d\n", y[0], y[1], y[2]);
    for (auto  & y : res2[3])     fprintf(fp,"%d,%d,%d\n", y[0], y[1], y[2]);
    for (auto  & y : res3[3])     fprintf(fp,"%d,%d,%d\n", y[0], y[1], y[2]);
    for (auto  & y : res4[3])     fprintf(fp,"%d,%d,%d\n", y[0], y[1], y[2]);

    for (auto  & y : res1[4])     fprintf(fp,"%d,%d,%d,%d\n", y[0], y[1], y[2], y[3]);
    for (auto  & y : res2[4])     fprintf(fp,"%d,%d,%d,%d\n", y[0], y[1], y[2], y[3]);
    for (auto  & y : res3[4])     fprintf(fp,"%d,%d,%d,%d\n", y[0], y[1], y[2], y[3]);
    for (auto  & y : res4[4])     fprintf(fp,"%d,%d,%d,%d\n", y[0], y[1], y[2], y[3]);

    for (auto  & y : res1[5])     fprintf(fp,"%d,%d,%d,%d,%d\n", y[0], y[1], y[2], y[3], y[4]);
    for (auto  & y : res2[5])     fprintf(fp,"%d,%d,%d,%d,%d\n", y[0], y[1], y[2], y[3], y[4]);
    for (auto  & y : res3[5])     fprintf(fp,"%d,%d,%d,%d,%d\n", y[0], y[1], y[2], y[3], y[4]);
    for (auto  & y : res4[5])     fprintf(fp,"%d,%d,%d,%d,%d\n", y[0], y[1], y[2], y[3], y[4]);

    for (auto  & y : res1[6])     fprintf(fp,"%d,%d,%d,%d,%d,%d\n", y[0], y[1], y[2], y[3], y[4], y[5]);
    for (auto  & y : res2[6])     fprintf(fp,"%d,%d,%d,%d,%d,%d\n", y[0], y[1], y[2], y[3], y[4], y[5]);
    for (auto  & y : res3[6])     fprintf(fp,"%d,%d,%d,%d,%d,%d\n", y[0], y[1], y[2], y[3], y[4], y[5]);
    for (auto  & y : res4[6])     fprintf(fp,"%d,%d,%d,%d,%d,%d\n", y[0], y[1], y[2], y[3], y[4], y[5]);

    for (auto  & y : res1[7])     fprintf(fp,"%d,%d,%d,%d,%d,%d,%d\n", y[0], y[1], y[2], y[3], y[4], y[5], y[6]);
    for (auto  & y : res2[7])     fprintf(fp,"%d,%d,%d,%d,%d,%d,%d\n", y[0], y[1], y[2], y[3], y[4], y[5], y[6]);
    for (auto  & y : res3[7])     fprintf(fp,"%d,%d,%d,%d,%d,%d,%d\n", y[0], y[1], y[2], y[3], y[4], y[5], y[6]);
    for (auto  & y : res4[7])     fprintf(fp,"%d,%d,%d,%d,%d,%d,%d\n", y[0], y[1], y[2], y[3], y[4], y[5], y[6]);
    fclose(fp);
	return 0;
}


