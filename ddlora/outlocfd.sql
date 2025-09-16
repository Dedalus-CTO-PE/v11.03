create table outlocaf
(
  loasite     varchar2(6) default ' ' not null,
  loagrup     varchar2(3) default ' ' not null,
  loatype     varchar2(6) default ' ' not null,
  loacach     varchar2(3) default ' ' not null,
  loadate     varchar2(6) default ' ' not null,
  loanumb     number(8,0) default 0 not null,
  loaspar     varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outloca1 primary key( 
loasite,
loagrup,
loatype,
loacach,
loadate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
