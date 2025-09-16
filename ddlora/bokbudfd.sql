create table bokbudaf
(
  dbkbuboo    varchar2(8) default ' ' not null,
  bkbudate    varchar2(8) default ' ' not null,
  bkbutime    varchar2(8) default ' ' not null,
  bkbuoper    varchar2(4) default ' ' not null,
  bkbuport    varchar2(2) default ' ' not null,
  bkbuspar    varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint bokbuda1 primary key( 
dbkbuboo)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index bokbuda2 on bokbudaf
(
bkbudate,
dbkbuboo
)
  tablespace pas_indx; 
