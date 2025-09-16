create table patscsaf
(
ptsschno    varchar2(12),
dptsstra    varchar2(3),
ptssadmn    varchar2(8),
ptssdate    varchar2(8),
ptsscamt    number(14,2),
ptsscent    number(2,0),
ptssyear    number(2,0),
ptssmon     number(2,0),
ptssday     number(2,0),
ptssrecn    varchar2(8),
ptsspaym    number(1,0),
ptssdraw    varchar2(30),
ptssbank    varchar2(30),
ptssbrnc    varchar2(30),
ptssaudf    number(1,0),
ptssdep     varchar2(1),
ptssdtyp    varchar2(3),
ptsssyst    number(1,0),
ptsspaye    varchar2(30),
ptssspar    varchar2(10),
lf          varchar2(1),
constraint patscsa1 primary key( 
ptsschno,
dptsstra)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym patscsaf for patscsaf;
