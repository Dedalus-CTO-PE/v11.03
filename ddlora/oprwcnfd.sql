create table oprwcnaf
(
  opwceffd    varchar2(8) default ' ' not null,
  opwcunit    varchar2(3) default ' ' not null,
  opwcweek    varchar2(2) default ' ' not null,
  opwccdat    varchar2(8) default ' ' not null,
  opwcctim    varchar2(8) default ' ' not null,
  opwccuid    varchar2(10) default ' ' not null,
  opwcspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprwcna1 primary key( 
opwceffd,
opwcunit)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprwcna2 on oprwcnaf
(
opwcunit,
opwceffd
)
  tablespace pas_indx; 
