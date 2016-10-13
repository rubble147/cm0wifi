/****************************************Copyright (c)****************************************************
**                               Zhejiang Hulong Motor Co., LTD.
**
**                                 http://www.hmcmotor.com.cn
**
**      
**
**--------------File Info---------------------------------------------------------------------------------
** File name:               xxx_data_struct.c
** Last modified date:      2016-09-30
** Last version:            V1.0
** Description:             1.��ƷЭ������ʹ�õ����ݽṹ���弰��ʵ�ֺ������ýӿ�
** 							2.Э�鷽�������ݽṹ���弰ʵ�ֺ������ýӿ�
**
**--------------------------------------------------------------------------------------------------------
** Created by:              yuk
** Created date:            2016-09-30
** Version:                 V1.0
** Descriptions:            The original version ��ʼ�汾
**
**--------------------------------------------------------------------------------------------------------
** Modified by:             
** Modified date:           
** Version:                 
** Descriptions:            
**
*********************************************************************************************************/

typedef struct {
	u8 xxx1;
	u8 xxx2;
	u8 xxx3;
} Usart1_CMD_PARAM;

static Usart1_CMD_PARAM cmdqueue[QUEUE_SIZE];
QUEUE Q;
Usart1_CMD_PARAM cmd2null = {0,};
u8 cmd3_delay_cnt = 0;

/**
 * initQ 
 * ��ʼ����������ѭ������ 
 * 
 * @author yuk (2016-10-12)
 * 
 * @param pQ 
 */
void initQ(QUEUE *pQ);

/**
 * full_queue 
 * �����Ƿ������жϺ��� 
 * 
 * @author yuk (2016-10-12)
 * 
 * @param pQ ����ָ��
 * 
 * @return u8 ������ ���� 1 δ�� ����0
 */
u8 full_queue(QUEUE *pQ);

/**
 * empty_queue 
 * �����Ƿ�Ϊ���жϺ��� 
 * 
 * @author yuk (2016-10-12)
 * 
 * @param pQ ����ָ��
 * 
 * @return u8 ���п� ���� 1 ��Ϊ�� ����0
 */
u8 empty_queue(QUEUE *pQ);

/**
 * en_queue 
 * ������������в������� 
 * 
 * @author yuk (2016-10-12)
 * 
 * @param pQ   ����ָ��
 * @param cmdn ����n
 * 
 * @return u8 
 */
u8 en_queue(QUEUE *pQ,Usart1_CMD_PARAM cmdn);

/**
 * del_queue 
 * ������������в������� 
 * 
 * @author yuk (2016-10-12)
 * 
 * @param pQ   ����ָ�� 
 * 
 * @return Usart1_CMD_PARAM ����n
 */
Usart1_CMD_PARAM del_queue(QUEUE *pQ);
