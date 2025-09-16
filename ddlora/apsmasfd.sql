create table apsaudma
(
  apmaaudd    varchar2(8) default ' ' not null,
  apmaaudt    varchar2(8) default ' ' not null,
  apmaaudp    varchar2(2) default ' ' not null,
  apmaaudr    varchar2(1) default ' ' not null,
  apmaauds    number(1,0) default 0 not null,
  apmaaudo    varchar2(4) default ' ' not null,
  apmacrd     varchar2(5) default ' ' not null,
  apmatyp     varchar2(3) default ' ' not null,
  apmasky     varchar2(6) default ' ' not null,
  apmacn1     varchar2(30) default ' ' not null,
  apmacn2     varchar2(30) default ' ' not null,
  apmaca1     varchar2(25) default ' ' not null,
  apmaca2     varchar2(25) default ' ' not null,
  apmaca3     varchar2(25) default ' ' not null,
  apmacpc     varchar2(6) default ' ' not null,
  apmactel    varchar2(15) default ' ' not null,
  apmacfax    varchar2(15) default ' ' not null,
  apmacmod    varchar2(15) default ' ' not null,
  apmacedi    varchar2(15) default ' ' not null,
  apmacon     varchar2(30) default ' ' not null,
  apmasn1     varchar2(30) default ' ' not null,
  apmasn2     varchar2(30) default ' ' not null,
  apmasa1     varchar2(25) default ' ' not null,
  apmasa2     varchar2(25) default ' ' not null,
  apmasa3     varchar2(25) default ' ' not null,
  apmaspc     varchar2(6) default ' ' not null,
  apmastel    varchar2(15) default ' ' not null,
  apmasfax    varchar2(15) default ' ' not null,
  apmasmod    varchar2(15) default ' ' not null,
  apmasedi    varchar2(15) default ' ' not null,
  apmascon    varchar2(30) default ' ' not null,
  apmabsb     varchar2(7) default ' ' not null,
  apmabac     varchar2(9) default ' ' not null,
  apmapnm     varchar2(35) default ' ' not null,
  apmappt     number(14,2) default 0 not null,
  apmapot     number(14,2) default 0 not null,
  apmahor     number(1,0) default 0 not null,
  apmahin     number(1,0) default 0 not null,
  apmahcr     number(1,0) default 0 not null,
  apmahpy     number(1,0) default 0 not null,
  apmapmt     number(1,0) default 0 not null,
  apmagmt     number(1,0) default 0 not null,
  apmappd     varchar2(2) default ' ' not null,
  apmadtm     varchar2(3) default ' ' not null,
  apmaur1     varchar2(30) default ' ' not null,
  apmaur2     varchar2(30) default ' ' not null,
  apmaud1     varchar2(8) default ' ' not null,
  apmaud2     varchar2(8) default ' ' not null,
  apmauc1     varchar2(3) default ' ' not null,
  apmauc2     varchar2(3) default ' ' not null,
  apmagreg    number(1,0) default 0 not null,
  apmauy2     number(1,0) default 0 not null,
  apmadis     number(6,2) default 0 not null,
  apmatse     varchar2(10) default ' ' not null,
  apmaabn     varchar2(11) default ' ' not null,
  apmadiss    varchar2(5) default ' ' not null,
  apmaspa     varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index apsaudma on apsaudma
(
apmaaudd,
apmaaudt,
apmaaudp,
apmaaudr
)
tablespace pas_indx; 
create table apsmasaf
(
  apmacrd     varchar2(5) default ' ' not null,
  apmatyp     varchar2(3) default ' ' not null,
  apmasky     varchar2(6) default ' ' not null,
  apmacn1     varchar2(30) default ' ' not null,
  apmacn2     varchar2(30) default ' ' not null,
  apmaca1     varchar2(25) default ' ' not null,
  apmaca2     varchar2(25) default ' ' not null,
  apmaca3     varchar2(25) default ' ' not null,
  apmacpc     varchar2(6) default ' ' not null,
  apmactel    varchar2(15) default ' ' not null,
  apmacfax    varchar2(15) default ' ' not null,
  apmacmod    varchar2(15) default ' ' not null,
  apmacedi    varchar2(15) default ' ' not null,
  apmacon     varchar2(30) default ' ' not null,
  apmasn1     varchar2(30) default ' ' not null,
  apmasn2     varchar2(30) default ' ' not null,
  apmasa1     varchar2(25) default ' ' not null,
  apmasa2     varchar2(25) default ' ' not null,
  apmasa3     varchar2(25) default ' ' not null,
  apmaspc     varchar2(6) default ' ' not null,
  apmastel    varchar2(15) default ' ' not null,
  apmasfax    varchar2(15) default ' ' not null,
  apmasmod    varchar2(15) default ' ' not null,
  apmasedi    varchar2(15) default ' ' not null,
  apmascon    varchar2(30) default ' ' not null,
  apmabsb     varchar2(7) default ' ' not null,
  apmabac     varchar2(9) default ' ' not null,
  apmapnm     varchar2(35) default ' ' not null,
  apmappt     number(14,2) default 0 not null,
  apmapot     number(14,2) default 0 not null,
  apmahor     number(1,0) default 0 not null,
  apmahin     number(1,0) default 0 not null,
  apmahcr     number(1,0) default 0 not null,
  apmahpy     number(1,0) default 0 not null,
  apmapmt     number(1,0) default 0 not null,
  apmagmt     number(1,0) default 0 not null,
  apmappd     varchar2(2) default ' ' not null,
  apmadtm     varchar2(3) default ' ' not null,
  apmaur1     varchar2(30) default ' ' not null,
  apmaur2     varchar2(30) default ' ' not null,
  apmaud1     varchar2(8) default ' ' not null,
  apmaud2     varchar2(8) default ' ' not null,
  apmauc1     varchar2(3) default ' ' not null,
  apmauc2     varchar2(3) default ' ' not null,
  apmagreg    number(1,0) default 0 not null,
  apmauy2     number(1,0) default 0 not null,
  apmadis     number(6,2) default 0 not null,
  apmatse     varchar2(10) default ' ' not null,
  apmaabn     varchar2(11) default ' ' not null,
  apmadiss    varchar2(5) default ' ' not null,
  apmaspa     varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsmasa1 primary key( 
apmacrd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apsmasa2 on apsmasaf
(
apmatyp,
apmacrd
)
  tablespace pas_indx; 
create unique index apsmasa3 on apsmasaf
(
apmasky,
apmacrd
)
  tablespace pas_indx; 
