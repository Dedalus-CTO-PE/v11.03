create table patcodes
(
  tcode       varchar2(2) default ' ' not null,
  acode       varchar2(3) default ' ' not null,
  tdesc       varchar2(20) default ' ' not null,
  thcscod     varchar2(4) default ' ' not null,
  tcform6     number(6,0) default 0 not null,
  tcindc1     varchar2(1) default ' ' not null,
  tcindc2     varchar2(1) default ' ' not null,
  tcindc3     varchar2(1) default ' ' not null,
  tcindc4     varchar2(1) default ' ' not null,
  tcindc5     varchar2(1) default ' ' not null,
  ptcoactv    varchar2(1) default ' ' not null,
  tcindc6     varchar2(1) default ' ' not null,
  tcindc7     varchar2(1) default ' ' not null,
  tcindc8     varchar2(1) default ' ' not null,
  tcindc9     varchar2(1) default ' ' not null,
  tcindc10    varchar2(1) default ' ' not null,
  tcindc11    varchar2(1) default ' ' not null,
  ptcdgrpv    varchar2(3) default ' ' not null,
  ptcddeft    varchar2(1) default ' ' not null,
  ptcdnhcp    varchar2(4) default ' ' not null,
  ptcdhoss    varchar2(1) default ' ' not null,
  ptcdldes    varchar2(50) default ' ' not null,
  ptcddfic    varchar2(6) default ' ' not null,
  tcindc12    varchar2(1) default ' ' not null,
  tcindc13    varchar2(1) default ' ' not null,
  tcindc14    varchar2(1) default ' ' not null,
  tcindc15    varchar2(1) default ' ' not null,
  tcindc16    varchar2(1) default ' ' not null,
  tcindc17    varchar2(1) default ' ' not null,
  tcindc18    varchar2(1) default ' ' not null,
  tcindc19    varchar2(1) default ' ' not null,
  tcindc20    varchar2(1) default ' ' not null,
  tcindc21    varchar2(1) default ' ' not null,
  ptcdfelc    varchar2(10) default ' ' not null,
  ptcdudf2    varchar2(10) default ' ' not null,
  ptcdudf3    varchar2(10) default ' ' not null,
  ptcdudf4    varchar2(10) default ' ' not null,
  ptcdcrsc    number(4,2) default 0 not null,
  ptcdasc1    varchar2(6) default ' ' not null,
  ptcdasc2    varchar2(6) default ' ' not null,
  ptcdasc3    varchar2(6) default ' ' not null,
  ptcdasc4    varchar2(6) default ' ' not null,
  ptcdasc5    varchar2(6) default ' ' not null,
  tcindc22    varchar2(1) default ' ' not null,
  tcindc23    varchar2(1) default ' ' not null,
  tcindc24    varchar2(1) default ' ' not null,
  tcindc25    varchar2(1) default ' ' not null,
  tcindc26    varchar2(1) default ' ' not null,
  tcindc27    varchar2(1) default ' ' not null,
  tcindc28    varchar2(1) default ' ' not null,
  tcindc29    varchar2(1) default ' ' not null,
  tcindc30    varchar2(1) default ' ' not null,
  tcindc31    varchar2(1) default ' ' not null,
  tcindc32    varchar2(1) default ' ' not null,
  tcindc33    varchar2(1) default ' ' not null,
  tcindc34    varchar2(1) default ' ' not null,
  tcindc35    varchar2(1) default ' ' not null,
  tcindc36    varchar2(1) default ' ' not null,
  tcindc37    varchar2(1) default ' ' not null,
  tcindc38    varchar2(1) default ' ' not null,
  tcindc39    varchar2(1) default ' ' not null,
  tcindc40    varchar2(1) default ' ' not null,
  tcindc41    varchar2(1) default ' ' not null,
  ptcdudf5    varchar2(10) default ' ' not null,
  ptcdudf6    varchar2(10) default ' ' not null,
  ptcdudf7    varchar2(10) default ' ' not null,
  ptcdudf8    varchar2(10) default ' ' not null,
  ptcdudf9    varchar2(10) default ' ' not null,
  ptcdud10    varchar2(10) default ' ' not null,
  ptcdud11    varchar2(10) default ' ' not null,
  ptcdud12    varchar2(10) default ' ' not null,
  ptcdud13    varchar2(10) default ' ' not null,
  ptcdud14    varchar2(10) default ' ' not null,
  ptcdasc6    varchar2(6) default ' ' not null,
  ptcdasc7    varchar2(6) default ' ' not null,
  ptcdasc8    varchar2(6) default ' ' not null,
  ptcdasc9    varchar2(6) default ' ' not null,
  ptcdas10    varchar2(6) default ' ' not null,
  ptcdas11    varchar2(6) default ' ' not null,
  ptcdas12    varchar2(6) default ' ' not null,
  ptcdas13    varchar2(6) default ' ' not null,
  ptcdas14    varchar2(6) default ' ' not null,
  ptcdas15    varchar2(6) default ' ' not null,
  tcspare     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcode1 primary key( 
tcode,
acode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patcode2 on patcodes
(
tcode,
tdesc,
acode
)
  tablespace pas_indx; 
create unique index patcode3 on patcodes
(
acode,
tcode
)
  tablespace pas_indx; 
create unique index patcode4 on patcodes
(
acode,
tdesc,
tcode
)
  tablespace pas_indx; 
create unique index patcode5 on patcodes
(
tcode,
thcscod,
acode
)
  tablespace pas_indx; 
