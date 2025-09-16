create table sincodaf
(
  sicdcata    varchar2(3) default ' ' not null,
  sicdcode    varchar2(3) default ' ' not null,
  sicddesc    varchar2(30) default ' ' not null,
  sicdothr    varchar2(10) default ' ' not null,
  sicdcanc    varchar2(1) default ' ' not null,
  sicdfill    varchar2(2) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sincoda1 primary key( 
sicdcata,
sicdcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sincoda2 on sincodaf
(
sicdcode,
sicdcata
)
  tablespace pas_indx; 
