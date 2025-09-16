create table patnhiaf
(
  ptnhcat     varchar2(2) default ' ' not null,
  ptnhnhi     varchar2(4) default ' ' not null,
  ptnhcode    varchar2(3) default ' ' not null,
  ptnhipar    varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patnhia1 primary key( 
ptnhcat,
ptnhnhi)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
