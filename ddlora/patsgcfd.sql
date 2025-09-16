create table patsgcaf
(
ptsgfund    varchar2(6),
ptsgmbs     varchar2(9),
ptsgclss    varchar2(3),
ptsgclmn    varchar2(3),
ptsgspar    varchar2(17),
lf          varchar2(1),
constraint patsgca1 primary key( 
ptsgclmn,
ptsgfund,
ptsgmbs)
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
create public synonym patsgcaf for patsgcaf;
