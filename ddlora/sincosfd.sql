create table sincosaf
(
  sicocat     varchar2(7) default ' ' not null,
  sicosup     varchar2(5) default ' ' not null,
  sicosut     varchar2(15) default ' ' not null,
  sicodat     varchar2(8) default ' ' not null,
  sicoopr     number(14,2) default 0 not null,
  siconpr     number(14,2) default 0 not null,
  sicospa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sincosa1 primary key( 
sicocat,
sicosup,
sicosut,
sicodat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
