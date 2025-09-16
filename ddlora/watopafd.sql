create table watopaaf
(
wtopurno    varchar2(8),
wtopcode    varchar2(9),
wtopcoun    varchar2(2),
wtopsite    varchar2(6),
wtopclin    varchar2(6),
wtopdate    varchar2(8),
wtopstrt    varchar2(5),
wtopslot    varchar2(3),
wtopoutn    varchar2(8),
wtoposta    varchar2(3),
wtoppdat    varchar2(8),
wtopptim    varchar2(8),
wtopstat    varchar2(1),
wtopcdat    varchar2(8),
wtopctim    varchar2(8),
wtopcuid    varchar2(10),
wtopudat    varchar2(8),
wtoputim    varchar2(8),
wtopuuid    varchar2(10),
wtopspar    varchar2(50),
lf          varchar2(1),
constraint watopaa1 primary key( 
wtopurno,
wtopcode,
wtopcoun,
wtopoutn)
)
tablespace indx 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace indx 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym watopaaf for watopaaf;
create unique index watopaa2 on watopaaf
(
wtopoutn
)
  tablespace indx 
initrans 3 
storage ( 
  initial 16k 
); 
