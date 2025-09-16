create table mammasxf
(
  dmaxno      varchar2(8) default ' ' not null,
  maxheigt    number(3,0) default 0 not null,
  maxweigt    number(3,0) default 0 not null,
  maxprev     varchar2(1) default ' ' not null,
  maxdprev    varchar2(10) default ' ' not null,
  maxhyst     varchar2(1) default ' ' not null,
  maxdhyst    varchar2(10) default ' ' not null,
  maxfamly    varchar2(1) default ' ' not null,
  maxdfaml    varchar2(10) default ' ' not null,
  maxcancr    varchar2(1) default ' ' not null,
  maxdcanc    varchar2(10) default ' ' not null,
  maxsurg     varchar2(1) default ' ' not null,
  maxuser1    varchar2(3) default ' ' not null,
  maxuser2    varchar2(3) default ' ' not null,
  maxuser3    varchar2(3) default ' ' not null,
  maxuser4    varchar2(3) default ' ' not null,
  maxuser5    varchar2(3) default ' ' not null,
  maxuser6    varchar2(3) default ' ' not null,
  maxuser7    varchar2(3) default ' ' not null,
  maxuser8    varchar2(3) default ' ' not null,
  maxrdoct    varchar2(6) default ' ' not null,
  maxtesno    number(2,0) default 0 not null,
  maxlock     varchar2(2) default ' ' not null,
  maxfill     varchar2(6) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mammasx1 primary key( 
dmaxno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
