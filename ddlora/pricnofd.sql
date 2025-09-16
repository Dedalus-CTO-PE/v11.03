create table pricnoaf
(
prcocrno    varchar2(8),
prcodate    varchar2(8),
prcodebt    varchar2(8),
prcoscan    varchar2(2),
prcoinvn    varchar2(8),
prcostat    varchar2(1),
prcoreas    varchar2(3),
prcoamnt    number(14,2),
prcogstm    number(14,2),
prcospar    varchar2(50),
lf          varchar2(1),
constraint pricnoa1 primary key( 
prcocrno)
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
create public synonym pricnoaf for pricnoaf;
create unique index pricnoa2 on pricnoaf
(
prcodebt,
prcoscan,
prcocrno
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index pricnoa3 on pricnoaf
(
prcoinvn,
prcocrno
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index pricnoa4 on pricnoaf
(
prcodate,
prcocrno
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
