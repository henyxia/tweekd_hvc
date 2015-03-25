#include <avr/io.h>
#include <util/delay.h>


#define	TMP0	932
#define	TMP1	931
#define	TMP2	929
#define	TMP3	928
#define	TMP4	927
#define	TMP5	925
#define	TMP6	924
#define	TMP7	923
#define	TMP8	921
#define	TMP9	920
#define	TMP10	918
#define	TMP11	917
#define	TMP12	916
#define	TMP13	914
#define	TMP14	913
#define	TMP15	911
#define	TMP16	910
#define	TMP17	908
#define	TMP18	907
#define	TMP19	905
#define	TMP20	904
#define	TMP21	902
#define	TMP22	900
#define	TMP23	899
#define	TMP24	897
#define	TMP25	896
#define	TMP26	894
#define	TMP27	892
#define	TMP28	891
#define	TMP29	889
#define	TMP30	887
#define	TMP31	886
#define	TMP32	884
#define	TMP33	882
#define	TMP34	880
#define	TMP35	879
#define	TMP36	877
#define	TMP37	875
#define	TMP38	873
#define	TMP39	871
#define	TMP40	869
#define	TMP41	868
#define	TMP42	866
#define	TMP43	864
#define	TMP44	862
#define	TMP45	860
#define	TMP46	858
#define	TMP47	856
#define	TMP48	854
#define	TMP49	852
#define	TMP50	850
#define	TMP51	848
#define	TMP52	846
#define	TMP53	844
#define	TMP54	842
#define	TMP55	840
#define	TMP56	838
#define	TMP57	836
#define	TMP58	834
#define	TMP59	832
#define	TMP60	830
#define	TMP61	828
#define	TMP62	825
#define	TMP63	823
#define	TMP64	821
#define	TMP65	819
#define	TMP66	817
#define	TMP67	814
#define	TMP68	812
#define	TMP69	810
#define	TMP70	808
#define	TMP71	805
#define	TMP72	803
#define	TMP73	801
#define	TMP74	799
#define	TMP75	796
#define	TMP76	794
#define	TMP77	792
#define	TMP78	789
#define	TMP79	787
#define	TMP80	784
#define	TMP81	782
#define	TMP82	780
#define	TMP83	777
#define	TMP84	775
#define	TMP85	772
#define	TMP86	770
#define	TMP87	767
#define	TMP88	765
#define	TMP89	762
#define	TMP90	760
#define	TMP91	757
#define	TMP92	755
#define	TMP93	752
#define	TMP94	750
#define	TMP95	747
#define	TMP96	745
#define	TMP97	742
#define	TMP98	740
#define	TMP99	737
#define	TMP100	734
#define	TMP101	732
#define	TMP102	729
#define	TMP103	727
#define	TMP104	724
#define	TMP105	721
#define	TMP106	719
#define	TMP107	716
#define	TMP108	713
#define	TMP109	711
#define	TMP110	708
#define	TMP111	705
#define	TMP112	703
#define	TMP113	700
#define	TMP114	697
#define	TMP115	694
#define	TMP116	692
#define	TMP117	689
#define	TMP118	686
#define	TMP119	684
#define	TMP120	681
#define	TMP121	678
#define	TMP122	675
#define	TMP123	673
#define	TMP124	670
#define	TMP125	667
#define	TMP126	664
#define	TMP127	661
#define	TMP128	659
#define	TMP129	656
#define	TMP130	653
#define	TMP131	650
#define	TMP132	647
#define	TMP133	645
#define	TMP134	642
#define	TMP135	639
#define	TMP136	636
#define	TMP137	633
#define	TMP138	631
#define	TMP139	628
#define	TMP140	625
#define	TMP141	622
#define	TMP142	619
#define	TMP143	616
#define	TMP144	614
#define	TMP145	611
#define	TMP146	608
#define	TMP147	605
#define	TMP148	602
#define	TMP149	599
#define	TMP150	596
#define	TMP151	594
#define	TMP152	591
#define	TMP153	588
#define	TMP154	585
#define	TMP155	582
#define	TMP156	579
#define	TMP157	577
#define	TMP158	574
#define	TMP159	571
#define	TMP160	568
#define	TMP161	565
#define	TMP162	562
#define	TMP163	560
#define	TMP164	557
#define	TMP165	554
#define	TMP166	551
#define	TMP167	548
#define	TMP168	545
#define	TMP169	543
#define	TMP170	540
#define	TMP171	537
#define	TMP172	534
#define	TMP173	531
#define	TMP174	529
#define	TMP175	526
#define	TMP176	523
#define	TMP177	520
#define	TMP178	518
#define	TMP179	515
#define	TMP180	512
#define	TMP181	509
#define	TMP182	506
#define	TMP183	504
#define	TMP184	501
#define	TMP185	498
#define	TMP186	495
#define	TMP187	493
#define	TMP188	490
#define	TMP189	487
#define	TMP190	485
#define	TMP191	482
#define	TMP192	479
#define	TMP193	476
#define	TMP194	474
#define	TMP195	471
#define	TMP196	468
#define	TMP197	466
#define	TMP198	463
#define	TMP199	460
#define	TMP200	458
#define	TMP201	455
#define	TMP202	453
#define	TMP203	450
#define	TMP204	447
#define	TMP205	445
#define	TMP206	442
#define	TMP207	439
#define	TMP208	437
#define	TMP209	434
#define	TMP210	432
#define	TMP211	429
#define	TMP212	427
#define	TMP213	424
#define	TMP214	422
#define	TMP215	419
#define	TMP216	417
#define	TMP217	414
#define	TMP218	412
#define	TMP219	409
#define	TMP220	407
#define	TMP221	404
#define	TMP222	402
#define	TMP223	399
#define	TMP224	397
#define	TMP225	394
#define	TMP226	392
#define	TMP227	389
#define	TMP228	387
#define	TMP229	385
#define	TMP230	382
#define	TMP231	380
#define	TMP232	378
#define	TMP233	375
#define	TMP234	373
#define	TMP235	371
#define	TMP236	368
#define	TMP237	366
#define	TMP238	364
#define	TMP239	361
#define	TMP240	359
#define	TMP241	357
#define	TMP242	355
#define	TMP243	352
#define	TMP244	350
#define	TMP245	348
#define	TMP246	346
#define	TMP247	343
#define	TMP248	341
#define	TMP249	339
#define	TMP250	337
#define	TMP251	335
#define	TMP252	333
#define	TMP253	330
#define	TMP254	328
#define	TMP255	326




#define CPU_FREQ    16000000L
#define	VAL25		895
#define	VAL105		246

void init_serial(int speed)
{
	UBRR0 = CPU_FREQ/(((unsigned long int)speed)<<4)-1;
	UCSR0B = (1<<TXEN0 | 1<<RXEN0);
	UCSR0C = (1<<UCSZ01 | 1<<UCSZ00);
	UCSR0A &= (1 << U2X0);
}

void send_serial(unsigned char c)
{
	loop_until_bit_is_set(UCSR0A, UDRE0);
	UDR0 = c;
}

unsigned char get_serial(void)
{
	loop_until_bit_is_set(UCSR0A, RXC0);
	return UDR0;
}

void port_initio(void)
{
	DDRD &= 0xFC;
	DDRD |= 0x3C;
	DDRC = 0x00;
	DDRB &= 0xFE;
	PORTD |= 0x3C;
}

int analogRead(uint8_t pin)
{
        uint8_t low, high;

        if (pin >= 14)
			pin -= 14; // allow for channel or pin numbers
        ADMUX = (0x01 << 6) | (pin & 0x07);
		ADCSRA|=(1<<ADSC);
        while (bit_is_set(ADCSRA, ADSC));
        low  = ADCL;
        high = ADCH;

        return (high << 8) | low;
}

void ad_init(unsigned char channel)   
{   
	ADCSRA|=(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);   
	ADMUX|=(1<<REFS0)|(1<<ADLAR);
	ADMUX=(ADMUX&0xf0)|channel;   
	ADCSRA|=(1<<ADEN);
}   

int main(void)
{
	init_serial(19200);
	port_initio();
	ad_init(PINC&0x00);
	uint8_t	opto0 = 0;
	uint8_t	opto1 = 0;
	unsigned char ser;
	unsigned int temp;
	unsigned char ftemp;

	while (1)
	{
		temp = analogRead(0);
		if(temp <= TMP255)
			ftemp = 255;
		else if(temp <= TMP254)
			ftemp = 254;
		else if(temp <= TMP253)
			ftemp = 253;
		else if(temp <= TMP252)
			ftemp = 252;
		else if(temp <= TMP251)
			ftemp = 251;
		else if(temp <= TMP250)
			ftemp = 250;
		else if(temp <= TMP249)
			ftemp = 249;
		else if(temp <= TMP248)
			ftemp = 248;
		else if(temp <= TMP247)
			ftemp = 247;
		else if(temp <= TMP246)
			ftemp = 246;
		else if(temp <= TMP245)
			ftemp = 245;
		else if(temp <= TMP244)
			ftemp = 244;
		else if(temp <= TMP243)
			ftemp = 243;
		else if(temp <= TMP242)
			ftemp = 242;
		else if(temp <= TMP241)
			ftemp = 241;
		else if(temp <= TMP240)
			ftemp = 240;
		else if(temp <= TMP239)
			ftemp = 239;
		else if(temp <= TMP238)
			ftemp = 238;
		else if(temp <= TMP237)
			ftemp = 237;
		else if(temp <= TMP236)
			ftemp = 236;
		else if(temp <= TMP235)
			ftemp = 235;
		else if(temp <= TMP234)
			ftemp = 234;
		else if(temp <= TMP233)
			ftemp = 233;
		else if(temp <= TMP232)
			ftemp = 232;
		else if(temp <= TMP231)
			ftemp = 231;
		else if(temp <= TMP230)
			ftemp = 230;
		else if(temp <= TMP229)
			ftemp = 229;
		else if(temp <= TMP228)
			ftemp = 228;
		else if(temp <= TMP227)
			ftemp = 227;
		else if(temp <= TMP226)
			ftemp = 226;
		else if(temp <= TMP225)
			ftemp = 225;
		else if(temp <= TMP224)
			ftemp = 224;
		else if(temp <= TMP223)
			ftemp = 223;
		else if(temp <= TMP222)
			ftemp = 222;
		else if(temp <= TMP221)
			ftemp = 221;
		else if(temp <= TMP220)
			ftemp = 220;
		else if(temp <= TMP219)
			ftemp = 219;
		else if(temp <= TMP218)
			ftemp = 218;
		else if(temp <= TMP217)
			ftemp = 217;
		else if(temp <= TMP216)
			ftemp = 216;
		else if(temp <= TMP215)
			ftemp = 215;
		else if(temp <= TMP214)
			ftemp = 214;
		else if(temp <= TMP213)
			ftemp = 213;
		else if(temp <= TMP212)
			ftemp = 212;
		else if(temp <= TMP211)
			ftemp = 211;
		else if(temp <= TMP210)
			ftemp = 210;
		else if(temp <= TMP209)
			ftemp = 209;
		else if(temp <= TMP208)
			ftemp = 208;
		else if(temp <= TMP207)
			ftemp = 207;
		else if(temp <= TMP206)
			ftemp = 206;
		else if(temp <= TMP205)
			ftemp = 205;
		else if(temp <= TMP204)
			ftemp = 204;
		else if(temp <= TMP203)
			ftemp = 203;
		else if(temp <= TMP202)
			ftemp = 202;
		else if(temp <= TMP201)
			ftemp = 201;
		else if(temp <= TMP200)
			ftemp = 200;
		else if(temp <= TMP199)
			ftemp = 199;
		else if(temp <= TMP198)
			ftemp = 198;
		else if(temp <= TMP197)
			ftemp = 197;
		else if(temp <= TMP196)
			ftemp = 196;
		else if(temp <= TMP195)
			ftemp = 195;
		else if(temp <= TMP194)
			ftemp = 194;
		else if(temp <= TMP193)
			ftemp = 193;
		else if(temp <= TMP192)
			ftemp = 192;
		else if(temp <= TMP191)
			ftemp = 191;
		else if(temp <= TMP190)
			ftemp = 190;
		else if(temp <= TMP189)
			ftemp = 189;
		else if(temp <= TMP188)
			ftemp = 188;
		else if(temp <= TMP187)
			ftemp = 187;
		else if(temp <= TMP186)
			ftemp = 186;
		else if(temp <= TMP185)
			ftemp = 185;
		else if(temp <= TMP184)
			ftemp = 184;
		else if(temp <= TMP183)
			ftemp = 183;
		else if(temp <= TMP182)
			ftemp = 182;
		else if(temp <= TMP181)
			ftemp = 181;
		else if(temp <= TMP180)
			ftemp = 180;
		else if(temp <= TMP179)
			ftemp = 179;
		else if(temp <= TMP178)
			ftemp = 178;
		else if(temp <= TMP177)
			ftemp = 177;
		else if(temp <= TMP176)
			ftemp = 176;
		else if(temp <= TMP175)
			ftemp = 175;
		else if(temp <= TMP174)
			ftemp = 174;
		else if(temp <= TMP173)
			ftemp = 173;
		else if(temp <= TMP172)
			ftemp = 172;
		else if(temp <= TMP171)
			ftemp = 171;
		else if(temp <= TMP170)
			ftemp = 170;
		else if(temp <= TMP169)
			ftemp = 169;
		else if(temp <= TMP168)
			ftemp = 168;
		else if(temp <= TMP167)
			ftemp = 167;
		else if(temp <= TMP166)
			ftemp = 166;
		else if(temp <= TMP165)
			ftemp = 165;
		else if(temp <= TMP164)
			ftemp = 164;
		else if(temp <= TMP163)
			ftemp = 163;
		else if(temp <= TMP162)
			ftemp = 162;
		else if(temp <= TMP161)
			ftemp = 161;
		else if(temp <= TMP160)
			ftemp = 160;
		else if(temp <= TMP159)
			ftemp = 159;
		else if(temp <= TMP158)
			ftemp = 158;
		else if(temp <= TMP157)
			ftemp = 157;
		else if(temp <= TMP156)
			ftemp = 156;
		else if(temp <= TMP155)
			ftemp = 155;
		else if(temp <= TMP154)
			ftemp = 154;
		else if(temp <= TMP153)
			ftemp = 153;
		else if(temp <= TMP152)
			ftemp = 152;
		else if(temp <= TMP151)
			ftemp = 151;
		else if(temp <= TMP150)
			ftemp = 150;
		else if(temp <= TMP149)
			ftemp = 149;
		else if(temp <= TMP148)
			ftemp = 148;
		else if(temp <= TMP147)
			ftemp = 147;
		else if(temp <= TMP146)
			ftemp = 146;
		else if(temp <= TMP145)
			ftemp = 145;
		else if(temp <= TMP144)
			ftemp = 144;
		else if(temp <= TMP143)
			ftemp = 143;
		else if(temp <= TMP142)
			ftemp = 142;
		else if(temp <= TMP141)
			ftemp = 141;
		else if(temp <= TMP140)
			ftemp = 140;
		else if(temp <= TMP139)
			ftemp = 139;
		else if(temp <= TMP138)
			ftemp = 138;
		else if(temp <= TMP137)
			ftemp = 137;
		else if(temp <= TMP136)
			ftemp = 136;
		else if(temp <= TMP135)
			ftemp = 135;
		else if(temp <= TMP134)
			ftemp = 134;
		else if(temp <= TMP133)
			ftemp = 133;
		else if(temp <= TMP132)
			ftemp = 132;
		else if(temp <= TMP131)
			ftemp = 131;
		else if(temp <= TMP130)
			ftemp = 130;
		else if(temp <= TMP129)
			ftemp = 129;
		else if(temp <= TMP128)
			ftemp = 128;
		else if(temp <= TMP127)
			ftemp = 127;
		else if(temp <= TMP126)
			ftemp = 126;
		else if(temp <= TMP125)
			ftemp = 125;
		else if(temp <= TMP124)
			ftemp = 124;
		else if(temp <= TMP123)
			ftemp = 123;
		else if(temp <= TMP122)
			ftemp = 122;
		else if(temp <= TMP121)
			ftemp = 121;
		else if(temp <= TMP120)
			ftemp = 120;
		else if(temp <= TMP119)
			ftemp = 119;
		else if(temp <= TMP118)
			ftemp = 118;
		else if(temp <= TMP117)
			ftemp = 117;
		else if(temp <= TMP116)
			ftemp = 116;
		else if(temp <= TMP115)
			ftemp = 115;
		else if(temp <= TMP114)
			ftemp = 114;
		else if(temp <= TMP113)
			ftemp = 113;
		else if(temp <= TMP112)
			ftemp = 112;
		else if(temp <= TMP111)
			ftemp = 111;
		else if(temp <= TMP110)
			ftemp = 110;
		else if(temp <= TMP109)
			ftemp = 109;
		else if(temp <= TMP108)
			ftemp = 108;
		else if(temp <= TMP107)
			ftemp = 107;
		else if(temp <= TMP106)
			ftemp = 106;
		else if(temp <= TMP105)
			ftemp = 105;
		else if(temp <= TMP104)
			ftemp = 104;
		else if(temp <= TMP103)
			ftemp = 103;
		else if(temp <= TMP102)
			ftemp = 102;
		else if(temp <= TMP101)
			ftemp = 101;
		else if(temp <= TMP100)
			ftemp = 100;
		else if(temp <= TMP99)
			ftemp = 99;
		else if(temp <= TMP98)
			ftemp = 98;
		else if(temp <= TMP97)
			ftemp = 97;
		else if(temp <= TMP96)
			ftemp = 96;
		else if(temp <= TMP95)
			ftemp = 95;
		else if(temp <= TMP94)
			ftemp = 94;
		else if(temp <= TMP93)
			ftemp = 93;
		else if(temp <= TMP92)
			ftemp = 92;
		else if(temp <= TMP91)
			ftemp = 91;
		else if(temp <= TMP90)
			ftemp = 90;
		else if(temp <= TMP89)
			ftemp = 89;
		else if(temp <= TMP88)
			ftemp = 88;
		else if(temp <= TMP87)
			ftemp = 87;
		else if(temp <= TMP86)
			ftemp = 86;
		else if(temp <= TMP85)
			ftemp = 85;
		else if(temp <= TMP84)
			ftemp = 84;
		else if(temp <= TMP83)
			ftemp = 83;
		else if(temp <= TMP82)
			ftemp = 82;
		else if(temp <= TMP81)
			ftemp = 81;
		else if(temp <= TMP80)
			ftemp = 80;
		else if(temp <= TMP79)
			ftemp = 79;
		else if(temp <= TMP78)
			ftemp = 78;
		else if(temp <= TMP77)
			ftemp = 77;
		else if(temp <= TMP76)
			ftemp = 76;
		else if(temp <= TMP75)
			ftemp = 75;
		else if(temp <= TMP74)
			ftemp = 74;
		else if(temp <= TMP73)
			ftemp = 73;
		else if(temp <= TMP72)
			ftemp = 72;
		else if(temp <= TMP71)
			ftemp = 71;
		else if(temp <= TMP70)
			ftemp = 70;
		else if(temp <= TMP69)
			ftemp = 69;
		else if(temp <= TMP68)
			ftemp = 68;
		else if(temp <= TMP67)
			ftemp = 67;
		else if(temp <= TMP66)
			ftemp = 66;
		else if(temp <= TMP65)
			ftemp = 65;
		else if(temp <= TMP64)
			ftemp = 64;
		else if(temp <= TMP63)
			ftemp = 63;
		else if(temp <= TMP62)
			ftemp = 62;
		else if(temp <= TMP61)
			ftemp = 61;
		else if(temp <= TMP60)
			ftemp = 60;
		else if(temp <= TMP59)
			ftemp = 59;
		else if(temp <= TMP58)
			ftemp = 58;
		else if(temp <= TMP57)
			ftemp = 57;
		else if(temp <= TMP56)
			ftemp = 56;
		else if(temp <= TMP55)
			ftemp = 55;
		else if(temp <= TMP54)
			ftemp = 54;
		else if(temp <= TMP53)
			ftemp = 53;
		else if(temp <= TMP52)
			ftemp = 52;
		else if(temp <= TMP51)
			ftemp = 51;
		else if(temp <= TMP50)
			ftemp = 50;
		else if(temp <= TMP49)
			ftemp = 49;
		else if(temp <= TMP48)
			ftemp = 48;
		else if(temp <= TMP47)
			ftemp = 47;
		else if(temp <= TMP46)
			ftemp = 46;
		else if(temp <= TMP45)
			ftemp = 45;
		else if(temp <= TMP44)
			ftemp = 44;
		else if(temp <= TMP43)
			ftemp = 43;
		else if(temp <= TMP42)
			ftemp = 42;
		else if(temp <= TMP41)
			ftemp = 41;
		else if(temp <= TMP40)
			ftemp = 40;
		else if(temp <= TMP39)
			ftemp = 39;
		else if(temp <= TMP38)
			ftemp = 38;
		else if(temp <= TMP37)
			ftemp = 37;
		else if(temp <= TMP36)
			ftemp = 36;
		else if(temp <= TMP35)
			ftemp = 35;
		else if(temp <= TMP34)
			ftemp = 34;
		else if(temp <= TMP33)
			ftemp = 33;
		else if(temp <= TMP32)
			ftemp = 32;
		else if(temp <= TMP31)
			ftemp = 31;
		else if(temp <= TMP30)
			ftemp = 30;
		else if(temp <= TMP29)
			ftemp = 29;
		else if(temp <= TMP28)
			ftemp = 28;
		else if(temp <= TMP27)
			ftemp = 27;
		else if(temp <= TMP26)
			ftemp = 26;
		else if(temp <= TMP25)
			ftemp = 25;
		else if(temp <= TMP24)
			ftemp = 24;
		else if(temp <= TMP23)
			ftemp = 23;
		else if(temp <= TMP22)
			ftemp = 22;
		else if(temp <= TMP21)
			ftemp = 21;
		else if(temp <= TMP20)
			ftemp = 20;
		else if(temp <= TMP19)
			ftemp = 19;
		else if(temp <= TMP18)
			ftemp = 18;
		else if(temp <= TMP17)
			ftemp = 17;
		else if(temp <= TMP16)
			ftemp = 16;
		else if(temp <= TMP15)
			ftemp = 15;
		else if(temp <= TMP14)
			ftemp = 14;
		else if(temp <= TMP13)
			ftemp = 13;
		else if(temp <= TMP12)
			ftemp = 12;
		else if(temp <= TMP11)
			ftemp = 11;
		else if(temp <= TMP10)
			ftemp = 10;
		else if(temp <= TMP9)
			ftemp = 9;
		else if(temp <= TMP8)
			ftemp = 8;
		else if(temp <= TMP7)
			ftemp = 7;
		else if(temp <= TMP6)
			ftemp = 6;
		else if(temp <= TMP5)
			ftemp = 5;
		else if(temp <= TMP4)
			ftemp = 4;
		else if(temp <= TMP3)
			ftemp = 3;
		else if(temp <= TMP2)
			ftemp = 2;
		else if(temp <= TMP1)
			ftemp = 1;
		else
			ftemp = 0;

		if((opto0 == 1) && ((PIND & 0x40) == 0x40))
			PORTD &= 0xE7;
		else
			PORTD |= 0x18;
		if((opto1 == 1) && ((PIND & 0x80) == 0x80))
			PORTD &= 0xDB;
		else
			PORTD |= 0x24;

		ser = get_serial();
		if(ser == 'B')
			opto0 = 1;
		else if(ser == 'D')
			opto0 = 0;
		else if(ser == 'E')
			opto1 = 1;
		else if(ser == 'G')
			opto1 = 0;
		else if(ser == 'H')
			send_serial(ftemp);
		else if(ser == 'F')
		{
			if((PINB & 0x01) == 0x01)
				send_serial('I');
			else
				send_serial('K');
		}
		else
			send_serial('J');
	}

	return 0;
}
