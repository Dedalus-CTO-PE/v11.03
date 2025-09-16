create table pmschaaf
(
  pmchadmn    varchar2(8) default ' ' not null,
  pmchtdat    varchar2(8) default ' ' not null,
  pmchttim    varchar2(8) default ' ' not null,
  pmchtwar    varchar2(3) default ' ' not null,
  pmchtbed    varchar2(3) default ' ' not null,
  pmchcdat    varchar2(8) default ' ' not null,
  pmchctim    varchar2(8) default ' ' not null,
  pmchctyp    varchar2(3) default ' ' not null,
  pmchreas    varchar2(3) default ' ' not null,
  pmchoval    varchar2(100) default ' ' not null,
  pmchnval    varchar2(100) default ' ' not null,
  pmchwebc    varchar2(10) default ' ' not null,
  pmchdatc    varchar2(8) default ' ' not null,
  pmchtimc    varchar2(8) default ' ' not null,
  pmchspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmschaa1 primary key( 
pmchadmn,
pmchtdat,
pmchttim,
pmchtwar,
pmchtbed,
pmchcdat,
pmchctim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
