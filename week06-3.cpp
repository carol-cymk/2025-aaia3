// week06-3.cpp
// LeetCode �ǲ߭p�e Simulation ���� ��1�D 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) { // C++ �禡�G�p�����
        vector<int> a;                          // �}�C a�A�ΨӦs��C�@������

        for (string op : operations) {     // C++ �i���j��
            if (op[0] == '+') {            // ��̫��Ӥ��Ƭۥ[�A��^�h
                int temp = a.back();       // ���O�U�̫�@��
                a.pop_back();              // �ȮɧR���̫�@��
                int temp2 = a.back();      // �O�U�˼ƲĤG��
                a.push_back(temp);         // ����R�����̫�@���ɦ^�h
                a.push_back(temp + temp2); // ��Ƭۥ[�A�A��^�h
            } else if (op[0] == 'D') {     // �N�̫�@�����H2�]Double�^
                a.push_back(a.back() * 2);
            } else if (op[0] == 'C') { // �R���W�@��
                a.pop_back();
            } else { //  �N�r���ন��ƫ��J�}�C
                a.push_back(stoi(op));
            }
        }

        // �̫�A�� for �j��N�}�C a ���Ҧ��ȥ[�`
        int ans = 0;
        for (int now : a) { // C++ �i�� for �j��]�]�i�ζǲ� for�^
            ans += now;
        }

        return ans; // �^���`��
    }
};
