vector<pair<int, int>> trackliked;
        vector<pair<int, int>> trackdisliked;

        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (c == '1')
            {
                trackliked.push_back(make_pair(i, arr[i]));
            }

            else
            {
                trackdisliked.push_back(make_pair(i, arr[i]));
            }
        }
