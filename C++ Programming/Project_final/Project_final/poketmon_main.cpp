
void main()
{
	InitHMap();
	InitHMonster();
re:
	system("cls");
	Menu();
	switch (_getch())
	{
	case '1':
		user.SelectMonster();
		break;
	case '2':
		Load();
		break;
	case '3':
		cout << "���α׷� ����." << endl;
		break;
	default:
		goto re;
	}
}
void InitHMonster(){
	HMonster["��"] = Fire;
	HMonster["��"] = Water;
	HMonster["��"] = Earth;
	HMonster["����"] = Electronic;

	HMonster["��"].push_back(Monster("���̸�", "��", 1, 80, "��", "����", "������", "ȭ�����", "���̸�.txt"));
	HMonster["��"].push_back(Monster("�Ҳɸ�", "��", 1, 80, "��", "������", "�Ҳɹ�ġ��", "�Ķ��Ҳ�", "�Ҳɸ�.txt"));
	HMonster["��"].push_back(Monster("������", "��", 2, 90, "��", "ȭǮ��", "���ǻ�����Ŭ", "����", "������.txt"));
	HMonster["��"].push_back(Monster("���׸���", "��", 2, 90, "��", "�Ҳ�Ƣ���", "��������", "ȭ��������", "���׸���.txt"));
	HMonster["��"].push_back(Monster("����Ÿ", "��", 3, 100, "��", "��������", "¤���", "�Ҳɼ���", "����Ÿ.txt"));
	HMonster["��"].push_back(Monster("��Ʈ��", "��", 7, 140, "��", "������", "�÷���", "��Ʈ�Ҳ�", "��Ʈ��.txt"));
	HMonster["��"].push_back(Monster("���ڸ�", "��", 10, 170, "��", "�÷������̺�", "��ǳ", "�Ҳ�ȸ����", "���ڸ�BOSS.txt"));

	HMonster["��"].push_back(Monster("���α�", "��", 1, 80, "��", "��ٶ��", "���������", "�����ĵ�", "���α�.txt"));
	HMonster["��"].push_back(Monster("�׾�ŷ", "��", 1, 70, "��", "Ƣ�������", "������", "�����Ű��", "�׾�ŷ.txt"));
	HMonster["��"].push_back(Monster("����", "��", 2, 90, "��", "���δ��", "����ź", "�ĵ�Ÿ��", "����.txt"));
	HMonster["��"].push_back(Monster("�����縮", "��", 2, 90, "��", "�ұݹ�", "��ǰ����", "������Ű�׽ý�", "�����縮.txt"));
	HMonster["��"].push_back(Monster("������", "��", 3, 100, "��", "°������", "������", "�õ���", "������.txt"));
	HMonster["��"].push_back(Monster("����Ĵ�", "��", 7, 140, "��", "�Ϳ���ô�ϱ�", "����ǥ�ٿ��", "����", "����Ĵ�.txt"));
	HMonster["��"].push_back(Monster("�źϿ�", "��", 10, 170, "��", "�׷ο���ġ", "������ĳ��", "���̵������", "�źϿ�BOSS.txt"));

	HMonster["����"].push_back(Monster("��ī��", "����", 1, 80, "��", "�����ġ��", "����ũ", "�鸸��Ʈ", "��ī��.txt"));
	HMonster["����"].push_back(Monster("�����", "����", 1, 80, "��", "�߱���", "�Ӹ��ڱ�", "������", "�����.txt"));
	HMonster["����"].push_back(Monster("����", "����", 1, 80, "��", "�ֱ�", "����ġ��", "���� ��ũ", "����.txt"));
	HMonster["����"].push_back(Monster("����", "����", 3, 100, "��", "���������", "�׸��ںн�", "�Ϸ�Ʈ����", "����.txt"));
	HMonster["����"].push_back(Monster("���ǽ��", "����", 4, 110, "��", "���¢��", "������ȭ", "��������", "���ǽ��.txt"));
	HMonster["����"].push_back(Monster("���", "����", 8, 150, "��", "�����ũ", "������", "������", "���.txt"));
	HMonster["����"].push_back(Monster("������", "����", 10, 170, "��", "���̾�����", "���ϵ庼Ʈ", "������ġ", "������BOSS.txt"));

	HMonster["��"].push_back(Monster("�̻��ؾ�", "��", 1, 80, "��", "��������", "���𳯸���", "����ä��", "�̻��ؾ�.txt"));
	HMonster["��"].push_back(Monster("ġ�ڸ�Ÿ", "��", 1, 80, "��", "�ķ�ġ��", "�����ٴ�����", "�����ø���", "ġ�ڸ�Ÿ.txt"));
	HMonster["��"].push_back(Monster("����", "��", 2, 90, "��", "�ٶ�����Ű��", "�ɾƴ��", "Į��������", "����.txt"));
	HMonster["��"].push_back(Monster("��������", "��", 3, 100, "��", "����������", "�볪����ġ", "��������", "��������.txt"));
	HMonster["��"].push_back(Monster("���丵", "��", 4, 110, "��", "���丮������", "����Ÿ��", "��������", "���丵.txt"));
	HMonster["��"].push_back(Monster("���ο�", "��", 8, 150, "��", "�ٴ���", "������ġ", "�ٴûձ�", "���ο�.txt"));
	HMonster["��"].push_back(Monster("�̻��ز�", "��", 10, 170, "��", "Ǯ����", "�Գ�������", "�ֶ��", "�̻��ز�BOSS.txt"));

	vector<Monster>::iterator fiter = Fire.begin();
	vector<Monster>::iterator witer = Water.begin();
	vector<Monster>::iterator eiter = Earth.begin();
	vector<Monster>::iterator eniter = Electronic.begin();
}