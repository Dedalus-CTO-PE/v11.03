create table patoicaf
(
  ptoiicd     varchar2(9) default ' ' not null,
  ptoikwd     varchar2(15) default ' ' not null,
  ptoispa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patoica1 primary key( 
ptoiicd,
ptoikwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patoica2 on patoicaf
(
ptoikwd,
ptoiicd
)
  tablespace pas_indx; 
