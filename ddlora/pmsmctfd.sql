create table pmsmctaf
(
  pmmcinvn    varchar2(8) default ' ' not null,
  pmmcsnam    varchar2(40) default ' ' not null,
  pmmcfnam    varchar2(40) default ' ' not null,
  pmmccdob    varchar2(8) default ' ' not null,
  pmmcmnum    varchar2(10) default ' ' not null,
  pmmcrnum    varchar2(1) default ' ' not null,
  pmmcadd1    varchar2(35) default ' ' not null,
  pmmcadd2    varchar2(35) default ' ' not null,
  pmmcadd3    varchar2(35) default ' ' not null,
  pmmcadd4    varchar2(35) default ' ' not null,
  pmmcpcod    varchar2(8) default ' ' not null,
  pmmcspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsmcta1 primary key( 
pmmcinvn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
