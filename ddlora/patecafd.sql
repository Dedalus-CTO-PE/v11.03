create table patecaaf
(
  dpteaadm    varchar2(8) default ' ' not null,
  dpteaepn    varchar2(2) default ' ' not null,
  pteawght    varchar2(6) default ' ' not null,
  pteaclss    varchar2(3) default ' ' not null,
  pteacrit    varchar2(3) default ' ' not null,
  pteauvth    varchar2(3) default ' ' not null,
  pteaspar    varchar2(55) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patecaa1 primary key( 
dpteaadm,
dpteaepn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
