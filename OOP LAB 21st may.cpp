
#include<iostream>
#include<string>
using namespace std; 

		class band{
			protected: 	
				int count;
				
			public: 
				virtual int getcount() = 0;
				
			};
		
		
		class metalband: public band{
			private: 
			int	counter; 
			
			public: 
			
			
		void set_add_counter(int number){
				
						
		counter = 1 + number; 
						 
				
			}
			
				int getcount(){ 
						
			return counter;  
			
				}
		
		};
				
		class jazzband : public band{
			private: 
			int	counter; 
			
			public: 
			
		void set_add_counter(int number){
			counter= 1+number; 
			
			}
			
				int getcount(){ 
						
						return counter;			
				}
		
		};
			
 
				
		class symphony : public band{
			private: 
			int	counter;
			int conductor;  
			
			public: 
			
			
		void set_add_counter(int number){
			counter = 1+number; 
			
			}
			
				int getcount(){ 
						
						return counter;  
			
				}
		
				void setconductor(int number )
				{
					conductor= number; 			
				 } 
				
				int getconductor()
				{
					return conductor;  
					
				 } 
		
		};
		 
		class marchingband : public band{
			private: 
			int	counter;	
			public: 
				void set_add_counter(int number){

				counter = 1+number; 
			
				}
			
					int getcount(){ 
						
							return this->counter;  
			
					}
		
				};
			
			
			
			
		int main()
		
			{
			
			metalband mb; 
			jazzband jb; 
			marchingband marb; 
				}
		
