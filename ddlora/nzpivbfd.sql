create table nzpivbaf
(
  nzivadmn    varchar2(8) default ' ' not null,
  nzivinvn    varchar2(8) default ' ' not null,
  nzivsunq    varchar2(3) default ' ' not null,
  nzivbrcd    varchar2(3) default ' ' not null,
  nzivamnt    number(14,2) default 0 not null,
  nzivgamn    number(14,2) default 0 not null,
  nzivspar    varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzpivba1 primary key( 
nzivadmn,
nzivinvn,
nzivsunq,
nzivbrcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
