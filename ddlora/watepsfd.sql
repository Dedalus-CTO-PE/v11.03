create table watepsaf
(
wtepeid     varchar2(4),
wtepurn     varchar2(8),
wteppro     varchar2(9),
wtepcnt     varchar2(2),
wteplev1    varchar2(10),
wteplev2    varchar2(10),
wteplev3    varchar2(10),
wteplev4    varchar2(10),
wtepanl1    number(16,4),
wtepanl2    number(16,4),
wtepanl3    number(16,4),
wtepdel     varchar2(1),
wtepspa     varchar2(20),
lf          varchar2(1),
constraint watepsa1 primary key( 
wtepeid,
wtepurn,
wteppro,
wtepcnt)
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
create public synonym watepsaf for watepsaf;
create unique index watepsa2 on watepsaf
(
wteplev1,
wteplev2,
wteplev3,
wteplev4,
wtepeid,
wtepurn,
wteppro,
wtepcnt
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
