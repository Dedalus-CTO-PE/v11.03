create table pmsbiiaf
(
pmbiseid    char(4),
pmbivisn    char(8),
pmbiurno    char(8),
pmbiaddt    char(8),
pmbidsdt    char(8),
pmbiifdt    char(8),
pmbiitdt    char(8),
pmbiiamt    decimal(8,2),
pmbipdrg    char(9),
pmbicflg    char(1),
pmbistat    char(1),
pmbiprnt    char(1),
pmbispar    char(20),
lf          char(1)
);
create unique index pmsbiia1 on pmsbiiaf
(
pmbiseid,
pmbivisn
);
revoke all on pmsbiiaf from public ; 
grant select on pmsbiiaf to public ; 
