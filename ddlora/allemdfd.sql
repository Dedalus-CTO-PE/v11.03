create table allemdaf
(
  alemvisn    varchar2(8) default ' ' not null,
  alemenct    varchar2(8) default ' ' not null,
  alemmcnt    varchar2(8) default ' ' not null,
  alemcode    varchar2(20) default ' ' not null,
  alemqant    varchar2(3) default ' ' not null,
  alemunit    varchar2(3) default ' ' not null,
  alemdura    varchar2(4) default ' ' not null,
  alemdtyp    varchar2(3) default ' ' not null,
  alemmedr    varchar2(3) default ' ' not null,
  alemmedt    varchar2(3) default ' ' not null,
  alemtext    varchar2(50) default ' ' not null,
  alemcdat    varchar2(8) default ' ' not null,
  alemctim    varchar2(8) default ' ' not null,
  alemcuid    varchar2(10) default ' ' not null,
  alemudat    varchar2(8) default ' ' not null,
  alemutim    varchar2(8) default ' ' not null,
  alemuuid    varchar2(10) default ' ' not null,
  alemspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allemda1 primary key( 
alemvisn,
alemenct,
alemmcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
