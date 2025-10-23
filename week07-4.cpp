// week07-4.cpp �ǲ߭p�e Simulation ���� ��4�D
// 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions; // ��4��
        cout << instructions;

        int x = 0, y = 0; // x �y��, y �y��, �}�l�n�b�쥻����m ���I (0,0)
        int d = 0;        // d: ��V direction 0:�_ 1:�F 2:�n 3:��
        // �k�� d = (d+1) % 4 ���l��
        // ���� d = (d+3) % 4 ���M�i�H�˹L�ӡA�ӯ��_�F�I
        int dx[4] = {0, 1, 0, -1}; // �e�i�@��ɡA�|�� x += dx[d] �� y += dy[d]
        int dy[4] = {1, 0, -1, 0}; // �o�ӬO�u�a��2D��������ءv�A�M�w�e�i�h��

        for (char c : instructions) { // �̧Ǩ��r�������O�A�@����1�Ӱʧ@
            if (c == 'G') { // �e�i1��A�t�X dx[d] dy[d] �e�i
                x += dx[d];
                y += dy[d];
            } else if (c == 'R') { // �k��
                d = (d + 1) % 4;
            } else if (c == 'L') { // ����
                d = (d + 3) % 4;
            }
        }
        // ���}�j���... ���M�|�@�����C���ɭԷ|���^�ӡA���ɭԷ|�^�ӡC
        cout << "x=" << x << " y=" << y << endl;
        if (x == 0 && y == 0) return true;
        else return false;
    }
};
