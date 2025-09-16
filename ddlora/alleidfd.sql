create table alleidaf
(
  aleivisn    varchar2(8) default ' ' not null,
  aleioapp    varchar2(180) default ' ' not null,
  aleiserv    varchar2(100) default ' ' not null,
  aleiroth    varchar2(50) default ' ' not null,
  aleircon    varchar2(100) default ' ' not null,
  aleispar    varchar2(73) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alleida1 primary key( 
aleivisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
