create table sinbpsaf
(
  sibpwar     varchar2(5) default ' ' not null,
  sibpcst     varchar2(5) default ' ' not null,
  sibpdel     varchar2(50) default ' ' not null,
  sibprac     varchar2(8) default ' ' not null,
  sibpcat     varchar2(7) default ' ' not null,
  sibptyp     varchar2(1) default ' ' not null,
  sibpreq     varchar2(7) default ' ' not null,
  sibprqt     number(14,2) default 0 not null,
  sibpaqt     number(14,2) default 0 not null,
  sibpbqt     number(14,2) default 0 not null,
  sibppfl     varchar2(2) default ' ' not null,
  sibpresi    varchar2(10) default ' ' not null,
  sibpspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinbpsa1 primary key( 
sibpwar,
sibpcst,
sibpdel,
sibprac,
sibpcat,
sibptyp,
sibpreq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
