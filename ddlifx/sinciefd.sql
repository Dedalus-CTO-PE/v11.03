create table sinaudie
(
siieaudd    char(8),
siieaudt    char(8),
siieaudp    char(2),
siieaudr    char(1),
siieauds    decimal(1,0),
siieaudo    char(4),
siiecat     char(7),
siiewar     char(5),
siiesid     char(6),
siieras     char(8),
siiesoh     decimal(14,2),
siiesoo     decimal(14,2),
siieroq     decimal(14,2),
siierol     decimal(14,2),
siiesti     decimal(1,0),
siiestd     char(8),
siiesic     decimal(1,0),
siiesab     decimal(1,0),
siieabc     char(1),
siiesus     decimal(1,0),
siieur1     char(15),
siieur2     char(15),
siieuc1     char(3),
siieuc2     char(3),
siieud1     char(8),
siieud2     char(8),
siieuy1     char(1),
siieuy2     char(1),
siiespa     char(40),
lf          char(1)
);
create index sinaudie on sinaudie
(
siieaudd,
siieaudt,
siieaudp,
siieaudr
);
revoke all on sinaudie from public ; 
grant select on sinaudie to public ; 
create table sincieaf
(
siiecat     char(7),
siiewar     char(5),
siiesid     char(6),
siieras     char(8),
siiesoh     decimal(14,2),
siiesoo     decimal(14,2),
siieroq     decimal(14,2),
siierol     decimal(14,2),
siiesti     decimal(1,0),
siiestd     char(8),
siiesic     decimal(1,0),
siiesab     decimal(1,0),
siieabc     char(1),
siiesus     decimal(1,0),
siieur1     char(15),
siieur2     char(15),
siieuc1     char(3),
siieuc2     char(3),
siieud1     char(8),
siieud2     char(8),
siieuy1     char(1),
siieuy2     char(1),
siiespa     char(40),
lf          char(1)
);
create unique index sinciea1 on sincieaf
(
siiecat,
siiewar
);
create unique index sinciea2 on sincieaf
(
siiewar,
siiecat
);
create  index sinciea3 on sincieaf
(
siieras,
siiecat
);
revoke all on sincieaf from public ; 
grant select on sincieaf to public ; 
