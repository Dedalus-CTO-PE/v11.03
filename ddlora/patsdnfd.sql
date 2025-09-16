create table patsdnaf
(
ptdnurno    varchar2(8),
dptdncnt    varchar2(2),
ptdncode    varchar2(3),
ptdnlupd    varchar2(8),
ptdnspar    varchar2(10),
lf          varchar2(1),
constraint patsdna1 primary key( 
ptdnurno,
dptdncnt)
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
create public synonym patsdnaf for patsdnaf;
