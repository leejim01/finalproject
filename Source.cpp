void Poker::shuPoker()
{
	cout << "遊戲開始，開始洗牌\n";

	Ppoker[0] = randNum[j++];
	Ppoker[1] = randNum[j++];
	Bpoker[0] = randNum[j++];
	Bpoker[1] = randNum[j++];

	Pcardnum = 2;
	Bcardnum = 2;

	cout << "洗牌完成,你的牌為:" << Pget() << endl;
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
