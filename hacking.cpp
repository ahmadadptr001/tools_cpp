#include <iostream>


using namespace std;

#ifdef _WIN32
	string os = "nt";
#elif __unix || __unix__
	string os = "posix";
#else
	string os = "unknown";
#endif

void clear(){
	if (os == "nt"){
		system("cls");
	} else {
		system("clear");
	}
}

void install(string name_)
{
	cout << "\n\nInstalling " << name_ << "...\n";
	system("sleep 2");
	cout << "successfully installed\n";
}

int main() {
	
	string username, password;
	
	cout << "============= LOGIN =================";
	cout << "\n\nUsername\t: "; getline(cin, username);
	cout << "Password\t: "; getline(cin, password);
	cout << "\n====================================";
	
	if (password == "bagas ganteng"){
		
		cout << "\npassword is correct!\n";
		system("sleep 1");
		clear();
		
		cout << "\nTOOLS HACKING----------------\n";
		cout << "\nUsername : " << username << endl << endl;
		cout << "\t[1]. Air Crack\n";
		cout << "\t[2]. Ddos Attack\n";
		cout << "\t[3]. Nmap\n";
		cout << "\t[4]. Snake killer\n";
		cout << "\t[5]. Malware\n";
		cout << "\t[6]. Trojan Virus\n";
		cout << "\t[7]. Metasploit\n";
		cout << "\n---------------------------";
		
		cout << endl << endl;
		
		int virus;
		cout << "choice number from list..";
		cout << "\ncreating [+] > "; cin >> virus;
		
		switch(virus){
			case 1:
				install("air crack");
				break;
			case 2:
				install("ddos attack");
				break;
			case 3:
				install("nmap");
				break;
			case 4:
				install("snake killer"); break;
			case 5:
				install("malware"); break;
			case 6:
				install("trojan virus"); break;
			case 7:
				install("metasploit"); break;
		}
		
	} else {
		cout << "\n\npassword incorrect!\n";
	}

	return 0;
}
