create table pmshclaf
(
  pmhlhcpc    varchar2(10) default ' ' not null,
  pmhlhcpr    varchar2(10) default ' ' not null,
  pmhltype    varchar2(1) default ' ' not null,
  pmhljpdt    varchar2(8) default ' ' not null,
  pmhllpdt    varchar2(8) default ' ' not null,
  pmhlprmk    varchar2(1) default ' ' not null,
  pmhlprv1    varchar2(10) default ' ' not null,
  pmhlprv2    varchar2(10) default ' ' not null,
  pmhlprv3    varchar2(10) default ' ' not null,
  pmhlprv4    varchar2(10) default ' ' not null,
  pmhlprv5    varchar2(10) default ' ' not null,
  pmhlstat    varchar2(1) default ' ' not null,
  pmhlcdte    varchar2(8) default ' ' not null,
  pmhlctim    varchar2(8) default ' ' not null,
  pmhlwebc    varchar2(10) default ' ' not null,
  pmhllupd    varchar2(8) default ' ' not null,
  pmhllupt    varchar2(8) default ' ' not null,
  pmhlwebu    varchar2(10) default ' ' not null,
  pmhlspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmshcla1 primary key( 
pmhlhcpc,
pmhlhcpr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmshcla2 on pmshclaf
(
pmhlhcpr,
pmhlhcpc
)
  tablespace pas_indx; 
create unique index pmshcla3 on pmshclaf
(
pmhlprv1,
pmhlhcpc,
pmhlhcpr
)
  tablespace pas_indx; 
create unique index pmshcla4 on pmshclaf
(
pmhlcdte,
pmhlctim,
pmhlhcpc,
pmhlhcpr
)
  tablespace pas_indx; 
create unique index pmshcla5 on pmshclaf
(
pmhllupd,
pmhllupt,
pmhlhcpc,
pmhlhcpr
)
  tablespace pas_indx; 
