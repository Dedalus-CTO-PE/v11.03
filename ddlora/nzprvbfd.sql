create table nzprvbaf
(
  nzrvadmn    varchar2(8) default ' ' not null,
  nzrvinvn    varchar2(8) default ' ' not null,
  nzrvsunq    varchar2(3) default ' ' not null,
  nzrvbrcd    varchar2(3) default ' ' not null,
  nzrvamnt    number(14,2) default 0 not null,
  nzrvgamn    number(14,2) default 0 not null,
  nzrvspar    varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzprvba1 primary key( 
nzrvadmn,
nzrvinvn,
nzrvsunq,
nzrvbrcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
