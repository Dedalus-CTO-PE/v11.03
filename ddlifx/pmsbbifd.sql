create table pmsbbiaf
(
pmbbseid    char(4),
pmbbvisn    char(8),
pmbburno    char(8),
pmbbaddt    char(8),
pmbbifdt    char(8),
pmbbitdt    char(8),
pmbbamnt    decimal(14,2),
pmbbpdrg    char(9),
pmbbcflg    char(1),
pmbbstat    char(1),
pmbbprnt    char(1),
pmbbward    char(3),
pmbbambs    char(9),
pmbbcare    char(3),
pmbbspar    char(5),
lf          char(1)
);
create unique index pmsbbia1 on pmsbbiaf
(
pmbbseid,
pmbbvisn
);
revoke all on pmsbbiaf from public ; 
grant select on pmsbbiaf to public ; 
