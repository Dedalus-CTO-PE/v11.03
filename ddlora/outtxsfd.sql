create table outtxsaf
(
  ottxsite    varchar2(6) default ' ' not null,
  ottxctyp    varchar2(6) default ' ' not null,
  ottxbksr    varchar2(8) default ' ' not null,
  ottxbkrn    varchar2(2) default ' ' not null,
  ottxbktm    varchar2(3) default ' ' not null,
  ottxatsr    varchar2(8) default ' ' not null,
  ottxatrn    varchar2(2) default ' ' not null,
  ottxattm    varchar2(3) default ' ' not null,
  ottxspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outtxsa1 primary key( 
ottxsite,
ottxctyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
