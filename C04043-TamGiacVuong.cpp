#include<stdio.h> 
#include<math.h>
int main() { 
	int t; 
	scanf("%d",&t); 
	while(t--) { 
		int n, b=0; 
		scanf("%d",&n); 
		long long a[n]; 
		for(i=0;i<n;i++) { 
			scanf("%lld",&a[i]); a[i]*=a[i]; } 
		for (int i=0;i<n-1;i++) { 
			for(int j=i+1;j<n;j++) { 
				long long x=a[i]+a[j]; 
				if(sqrt(x)==(int)sqrt(x)) { 
					for (k=0;k<n;k++) 
						if (a[k]==x) { 
						printf("YES\n"); 
						b=1; 
						break; 
						} 
					break; 
					} 
				}
			if(b) break; 
		} 
		if (!b) printf("NO\n"); 
	} 
}