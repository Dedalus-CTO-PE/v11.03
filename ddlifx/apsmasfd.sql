create table apsaudma
(
  apmaaudd    char(8) default ' ' not null,
  apmaaudt    char(8) default ' ' not null,
  apmaaudp    char(2) default ' ' not null,
  apmaaudr    char(1) default ' ' not null,
  apmaauds    decimal(1,0) default 0 not null,
  apmaaudo    char(4) default ' ' not null,
  apmacrd     char(5) default ' ' not null,
  apmatyp     char(3) default ' ' not null,
  apmasky     char(6) default ' ' not null,
  apmacn1     char(30) default ' ' not null,
  apmacn2     char(30) default ' ' not null,
  apmaca1     char(25) default ' ' not null,
  apmaca2     char(25) default ' ' not null,
  apmaca3     char(25) default ' ' not null,
  apmacpc     char(6) default ' ' not null,
  apmactel    char(15) default ' ' not null,
  apmacfax    char(15) default ' ' not null,
  apmacmod    char(15) default ' ' not null,
  apmacedi    char(15) default ' ' not null,
  apmacon     char(30) default ' ' not null,
  apmasn1     char(30) default ' ' not null,
  apmasn2     char(30) default ' ' not null,
  apmasa1     char(25) default ' ' not null,
  apmasa2     char(25) default ' ' not null,
  apmasa3     char(25) default ' ' not null,
  apmaspc     char(6) default ' ' not null,
  apmastel    char(15) default ' ' not null,
  apmasfax    char(15) default ' ' not null,
  apmasmod    char(15) default ' ' not null,
  apmasedi    char(15) default ' ' not null,
  apmascon    char(30) default ' ' not null,
  apmabsb     char(7) default ' ' not null,
  apmabac     char(9) default ' ' not null,
  apmapnm     char(35) default ' ' not null,
  apmappt     decimal(14,2) default 0 not null,
  apmapot     decimal(14,2) default 0 not null,
  apmahor     decimal(1,0) default 0 not null,
  apmahin     decimal(1,0) default 0 not null,
  apmahcr     decimal(1,0) default 0 not null,
  apmahpy     decimal(1,0) default 0 not null,
  apmapmt     decimal(1,0) default 0 not null,
  apmagmt     decimal(1,0) default 0 not null,
  apmappd     char(2) default ' ' not null,
  apmadtm     char(3) default ' ' not null,
  apmaur1     char(30) default ' ' not null,
  apmaur2     char(30) default ' ' not null,
  apmaud1     char(8) default ' ' not null,
  apmaud2     char(8) default ' ' not null,
  apmauc1     char(3) default ' ' not null,
  apmauc2     char(3) default ' ' not null,
  apmagreg    decimal(1,0) default 0 not null,
  apmauy2     decimal(1,0) default 0 not null,
  apmadis     decimal(6,2) default 0 not null,
  apmatse     char(10) default ' ' not null,
  apmaabn     char(11) default ' ' not null,
  apmadiss    char(5) default ' ' not null,
  apmaspa     char(15) default ' ' not null,
  lf          char(1)
);
create index apsaudma on apsaudma
(
apmaaudd,
apmaaudt,
apmaaudp,
apmaaudr
);
revoke all on apsaudma from public ; 
grant select on apsaudma to public ; 
create table apsmasaf
(
  apmacrd     char(5) default ' ' not null,
  apmatyp     char(3) default ' ' not null,
  apmasky     char(6) default ' ' not null,
  apmacn1     char(30) default ' ' not null,
  apmacn2     char(30) default ' ' not null,
  apmaca1     char(25) default ' ' not null,
  apmaca2     char(25) default ' ' not null,
  apmaca3     char(25) default ' ' not null,
  apmacpc     char(6) default ' ' not null,
  apmactel    char(15) default ' ' not null,
  apmacfax    char(15) default ' ' not null,
  apmacmod    char(15) default ' ' not null,
  apmacedi    char(15) default ' ' not null,
  apmacon     char(30) default ' ' not null,
  apmasn1     char(30) default ' ' not null,
  apmasn2     char(30) default ' ' not null,
  apmasa1     char(25) default ' ' not null,
  apmasa2     char(25) default ' ' not null,
  apmasa3     char(25) default ' ' not null,
  apmaspc     char(6) default ' ' not null,
  apmastel    char(15) default ' ' not null,
  apmasfax    char(15) default ' ' not null,
  apmasmod    char(15) default ' ' not null,
  apmasedi    char(15) default ' ' not null,
  apmascon    char(30) default ' ' not null,
  apmabsb     char(7) default ' ' not null,
  apmabac     char(9) default ' ' not null,
  apmapnm     char(35) default ' ' not null,
  apmappt     decimal(14,2) default 0 not null,
  apmapot     decimal(14,2) default 0 not null,
  apmahor     decimal(1,0) default 0 not null,
  apmahin     decimal(1,0) default 0 not null,
  apmahcr     decimal(1,0) default 0 not null,
  apmahpy     decimal(1,0) default 0 not null,
  apmapmt     decimal(1,0) default 0 not null,
  apmagmt     decimal(1,0) default 0 not null,
  apmappd     char(2) default ' ' not null,
  apmadtm     char(3) default ' ' not null,
  apmaur1     char(30) default ' ' not null,
  apmaur2     char(30) default ' ' not null,
  apmaud1     char(8) default ' ' not null,
  apmaud2     char(8) default ' ' not null,
  apmauc1     char(3) default ' ' not null,
  apmauc2     char(3) default ' ' not null,
  apmagreg    decimal(1,0) default 0 not null,
  apmauy2     decimal(1,0) default 0 not null,
  apmadis     decimal(6,2) default 0 not null,
  apmatse     char(10) default ' ' not null,
  apmaabn     char(11) default ' ' not null,
  apmadiss    char(5) default ' ' not null,
  apmaspa     char(15) default ' ' not null,
  lf          char(1)
);
create unique index apsmasa1 on apsmasaf
(
apmacrd
);
create unique index apsmasa2 on apsmasaf
(
apmatyp,
apmacrd
);
create unique index apsmasa3 on apsmasaf
(
apmasky,
apmacrd
);
revoke all on apsmasaf from public ; 
grant select on apsmasaf to public ; 
