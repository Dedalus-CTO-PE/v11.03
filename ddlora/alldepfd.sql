create table alldepaf
(
  aldedept    varchar2(3) default ' ' not null,
  alderefe    varchar2(1) default ' ' not null,
  aldesecu    varchar2(1) default ' ' not null,
  aldevacs    varchar2(1) default ' ' not null,
  aldebill    varchar2(1) default ' ' not null,
  aldeprac    varchar2(6) default ' ' not null,
  aldeur1     varchar2(25) default ' ' not null,
  aldeur2     varchar2(25) default ' ' not null,
  aldeud1     varchar2(8) default ' ' not null,
  aldeud2     varchar2(8) default ' ' not null,
  aldeuy1     varchar2(1) default ' ' not null,
  aldeuy2     varchar2(1) default ' ' not null,
  aldeuc1     varchar2(3) default ' ' not null,
  aldeuc2     varchar2(3) default ' ' not null,
  aldecdat    varchar2(8) default ' ' not null,
  aldectim    varchar2(8) default ' ' not null,
  aldecuid    varchar2(10) default ' ' not null,
  aldeudat    varchar2(8) default ' ' not null,
  aldeutim    varchar2(8) default ' ' not null,
  aldeuuid    varchar2(10) default ' ' not null,
  aldehosp    varchar2(3) default ' ' not null,
  aldeactv    varchar2(1) default ' ' not null,
  aldesreq    varchar2(1) default ' ' not null,
  aldecsep    varchar2(6) default ' ' not null,
  aldeprgs    varchar2(3) default ' ' not null,
  aldepenc    varchar2(1) default ' ' not null,
  aldevecc    varchar2(6) default ' ' not null,
  aldeuerf    varchar2(1) default ' ' not null,
  aldeurad    varchar2(1) default ' ' not null,
  aldeuass    varchar2(1) default ' ' not null,
  aldeurap    varchar2(1) default ' ' not null,
  aldedlas    varchar2(1) default ' ' not null,
  aldedcli    varchar2(1) default ' ' not null,
  aldedraa    varchar2(1) default ' ' not null,
  aldedlet    varchar2(1) default ' ' not null,
  aldeueme    varchar2(1) default ' ' not null,
  aldeuein    varchar2(1) default ' ' not null,
  aldeuesu    varchar2(1) default ' ' not null,
  aldeuahp    varchar2(1) default ' ' not null,
  aldesite    varchar2(6) default ' ' not null,
  aldectyp    varchar2(6) default ' ' not null,
  aldeaone    varchar2(1) default ' ' not null,
  aldeutrs    varchar2(1) default ' ' not null,
  aldeuprt    varchar2(1) default ' ' not null,
  aldedacp    varchar2(1) default ' ' not null,
  aldespar    varchar2(49) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alldepa1 primary key( 
aldedept)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index alldepa2 on alldepaf
(
aldehosp,
aldedept
)
  tablespace pas_indx; 
