create table patklgaf
(
  ptlgcode    varchar2(4) default ' ' not null,
  ptlgkwrd    varchar2(15) default ' ' not null,
  ptlgspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patklga1 primary key( 
ptlgcode,
ptlgkwrd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patklga2 on patklgaf
(
ptlgkwrd,
ptlgcode
)
  tablespace pas_indx; 
