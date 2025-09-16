create table patcmeaf
(
  ptceadmn    varchar2(8) default ' ' not null,
  ptceurno    varchar2(8) default ' ' not null,
  ptceward    varchar2(3) default ' ' not null,
  ptcewbed    varchar2(3) default ' ' not null,
  ptcepnam    varchar2(20) default ' ' not null,
  ptcepsex    varchar2(1) default ' ' not null,
  ptcepage    number(3,0) default 0 not null,
  ptceadoc    varchar2(10) default ' ' not null,
  ptceambs    varchar2(9) default ' ' not null,
  ptceidsc    varchar2(30) default ' ' not null,
  ptcehfnd    varchar2(6) default ' ' not null,
  ptceadat    varchar2(8) default ' ' not null,
  ptceodat    varchar2(8) default ' ' not null,
  ptcecpay    varchar2(1) default ' ' not null,
  ptcepcat    varchar2(3) default ' ' not null,
  ptcebtyp    varchar2(3) default ' ' not null,
  ptceclos    number(4,0) default 0 not null,
  ptcetlos    number(4,0) default 0 not null,
  ptcelday    number(4,0) default 0 not null,
  ptceiday    number(4,0) default 0 not null,
  ptceoday    number(4,0) default 0 not null,
  ptcedpin    number(4,0) default 0 not null,
  ptcedtou    number(4,0) default 0 not null,
  ptcedtor    number(4,0) default 0 not null,
  ptceeday    number(4,0) default 0 not null,
  ptcerate    number(14,2) default 0 not null,
  ptcedchr    number(4,0) default 0 not null,
  ptcelsum    number(14,2) default 0 not null,
  ptceachr    number(14,2) default 0 not null,
  ptcedrgd    varchar2(8) default ' ' not null,
  ptcespar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcmea1 primary key( 
ptceadmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
