create table watesnaf
(
wtenuniq    varchar2(9),
wtenedat    varchar2(8),
wtenetyp    varchar2(1),
wtenevdt    varchar2(8),
wteneval    varchar2(70),
wtenwebc    varchar2(10),
wtencdat    varchar2(8),
wtenctim    varchar2(8),
wtenwebu    varchar2(10),
wtenudat    varchar2(8),
wtenutim    varchar2(8),
wtensadi    varchar2(10),
wtenmanu    varchar2(1),
wtenspar    varchar2(39),
lf          varchar2(1),
constraint watesna1 primary key( 
wtenuniq,
wtenetyp,
wtenevdt,
wtenedat,
wtensadi)
)
tablespace ibandx0x 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace ibadat0x 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym watesnaf for watesnaf;
create unique index watesna2 on watesnaf
(
wtenuniq,
wtenedat,
wtenetyp,
wtenevdt,
wtensadi
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index watesna3 on watesnaf
(
wtenedat,
wtenuniq,
wtenetyp,
wtenevdt,
wtensadi
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index watesna4 on watesnaf
(
wtenuniq,
wtenedat,
wtenevdt,
wtensadi,
wtenetyp
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index watesna5 on watesnaf
(
wtenuniq,
wtenetyp,
wtensadi,
wtenevdt,
wtenedat
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
