create table watesiaf
(
wteiuniq    varchar2(8),
wteidate    varchar2(8),
wteiurno    varchar2(10),
wteimedc    varchar2(11),
wteimeds    varchar2(3),
wteiwtno    varchar2(2),
wteidob     varchar2(8),
wteisex     varchar2(1),
wteipstc    varchar2(4),
wteiloca    varchar2(30),
wteiproc    varchar2(3),
wteisrgs    varchar2(2),
wteiclct    varchar2(1),
wteiilos    varchar2(1),
wteidtrg    varchar2(8),
wteisrcr    varchar2(1),
wteirefh    varchar2(4),
wteicldt    varchar2(8),
wteidtin    varchar2(8),
wteiclcd    varchar2(1),
wteiltst    varchar2(1),
wteipsdt    varchar2(8),
wteirfcs    varchar2(1),
wteibkdt    varchar2(8),
wteibkno    varchar2(2),
wteirebk    varchar2(1),
wteiscdt    varchar2(8),
wteidtrm    varchar2(8),
wteirrem    varchar2(1),
wteiinsd    varchar2(1),
wteitrnd    varchar2(4),
wteinrfc    varchar2(4),
wteinrre    varchar2(4),
wteinrlc    varchar2(4),
wteihosp    varchar2(2),
wteispar    varchar2(50),
lf          varchar2(1),
constraint watesia1 primary key( 
wteiuniq,
wteidate)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym watesiaf for watesiaf;
create unique index watesia2 on watesiaf
(
wteidate,
wteiuniq
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
