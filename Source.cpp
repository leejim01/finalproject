void Poker::shuPoker()
{
	cout << "�C���}�l�A�}�l�~�P\n";

	Ppoker[0] = randNum[j++];
	Ppoker[1] = randNum[j++];
	Bpoker[0] = randNum[j++];
	Bpoker[1] = randNum[j++];

	Pcardnum = 2;
	Bcardnum = 2;

	cout << "�~�P����,�A���P��:" << Pget() << endl;
}

string Poker::Pget()
{
	int i;
	string result = "";

	for (i = 0; i < Pcardnum; i++)
		result = result + pokerName[Ppoker[i]] + " ";

	return result;
}

string Poker::Bget()
{
	int i;
	string result = "";

	for (i = 0; i < Bcardnum; i++)
		result = result + pokerName[Bpoker[i]] + " ";

	return result;
}
