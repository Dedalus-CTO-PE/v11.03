create table prsdtlaf
(
p2dturun    varchar2(10),
p2dtadmn    varchar2(8),
p2dtepss    varchar2(1),
p2dtcods    varchar2(1),
p2dtepsd    varchar2(8),
p2dtcodd    varchar2(8),
p2dthosp    varchar2(3),
p2dtspar    varchar2(39),
lf          varchar2(1),
constraint prsdtla1 primary key( 
p2dturun,
p2dtadmn)
)
tablespace ibandx0x 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace ibadat0x 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym prsdtlaf for prsdtlaf;
create unique index prsdtla2 on prsdtlaf
(
p2dtadmn,
p2dturun
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
