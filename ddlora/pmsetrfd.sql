create table pmsetraf
(
  pmetstat    varchar2(1) default ' ' not null,
  pmettype    varchar2(2) default ' ' not null,
  pmettrid    varchar2(24) default ' ' not null,
  pmetcdte    varchar2(8) default ' ' not null,
  pmetctim    varchar2(8) default ' ' not null,
  pmetbatn    varchar2(8) default ' ' not null,
  pmetinvn    varchar2(8) default ' ' not null,
  pmetudte    varchar2(8) default ' ' not null,
  pmetutim    varchar2(8) default ' ' not null,
  pmetlocn    varchar2(8) default ' ' not null,
  pmetsnid    varchar2(60) default ' ' not null,
  pmetfdtm    varchar2(14) default ' ' not null,
  pmettdtm    varchar2(14) default ' ' not null,
  pmeteror    varchar2(4) default ' ' not null,
  pmetmodl    varchar2(1) default ' ' not null,
  pmetspar    varchar2(13) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsetra1 primary key( 
pmetstat,
pmettype,
pmetlocn,
pmetcdte,
pmetctim,
pmettrid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsetra2 on pmsetraf
(
pmetcdte,
pmetctim,
pmetstat,
pmettype,
pmetlocn,
pmettrid
)
  tablespace pas_indx; 
create unique index pmsetra3 on pmsetraf
(
pmetstat,
pmetcdte,
pmetctim,
pmettype,
pmetlocn,
pmettrid
)
  tablespace pas_indx; 
