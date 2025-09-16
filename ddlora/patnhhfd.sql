create table patnhhaf
(
  ptnhclam    varchar2(3) default ' ' not null,
  ptnhatyp    varchar2(3) default ' ' not null,
  ptnhmxdc    number(14,2) default 0 not null,
  ptnhpaic    number(14,2) default 0 not null,
  ptnhcdes    varchar2(30) default ' ' not null,
  ptnhspar    varchar2(42) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patnhha1 primary key( 
ptnhclam,
ptnhatyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
