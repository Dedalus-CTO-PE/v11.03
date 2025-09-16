create table bokdiaaf
(
  dbkdiboo    varchar2(8) default ' ' not null,
  bkdicode    varchar2(9) default ' ' not null,
  bkdides1    varchar2(80) default ' ' not null,
  bkdides2    varchar2(80) default ' ' not null,
  bkdicomm    varchar2(80) default ' ' not null,
  bkdiuniq    varchar2(10) default ' ' not null,
  bkdides3    varchar2(80) default ' ' not null,
  bkdides4    varchar2(80) default ' ' not null,
  bkdides5    varchar2(80) default ' ' not null,
  bkdides6    varchar2(80) default ' ' not null,
  bkdispar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint bokdiaa1 primary key( 
dbkdiboo,
bkdiuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
