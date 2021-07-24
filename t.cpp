#include"bits/stdc++.h"
#include"unistd.h"

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

char in[1<<23];
char out[1<<23];

struct scanner
{
    char const* o;
    scanner(): o(in){ load(); }
    void load(){ in[ fread(in , 1, sizeof(in)- 4, stdin)] = 0; }
    ll readInt(){
        ull u = 0, s = 0;
        while(*o && *o <= 32)++o;
        if (*o == '-')s = ~s, ++o; else if (*o == '+')++o;
        while(*o >='0' && *o <='9') u = (u << 3) + (u << 1) + (*o++ - '0');
        return (u^s) + !!s;
    }
    string readStr(){
	    string s;
	    while(isspace(*o)) ++o;
	    while(!isspace(*o) && *o != EOF) s+=*o++;
	    return s;
    }
};

struct writer
{
    char * w;
    writer(): w(out){}
   ~writer(){ flush();}
   void flush(){ if (w!=out){ fwrite(out,1,w-out,stdout); w = out; } }
   void writeInt(ll u, char c){
        char t[20]; int i = 20;
         if (u < 0){ *w++ = '-'; u = -u;}
        do t[--i] = u % 10 + '0'; while(u/=10);
        do *w++ = t[i++]; while(i < 20);
        *w++ = c;
   }
   void writeStr(string s, char c){
	   for(auto t : s) *w++ = t;
	   *w++ = c;
   }
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
		
	return 0;
}
